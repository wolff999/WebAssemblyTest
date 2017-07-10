// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Http.h"
#include "ServerConnection.generated.h"

/** Verb (GET, PUT, POST) used by the request */
UENUM(BlueprintType)
enum class ERequestVerb : uint8
{
	GET,
	POST,
	PUT,
	DEL UMETA(DisplayName = "DELETE"),
	/** Set CUSTOM verb by SetCustomVerb() function */
	CUSTOM
};

/** Content type (json, urlencoded, etc.) used by the request */
UENUM(BlueprintType)
enum class ERequestContentType : uint8
{
	x_www_form_urlencoded_url	UMETA(DisplayName = "x-www-form-urlencoded (URL)"),
	x_www_form_urlencoded_body	UMETA(DisplayName = "x-www-form-urlencoded (Request Body)"),
	json,
	binary
};

/** Enumerates the current state of an Http request */
UENUM(BlueprintType)
enum class ERequestStatus : uint8
{
	/** Has not been started via ProcessRequest() */
	NotStarted,
	/** Currently being ticked and processed */
	Processing,
	/** Finished but failed */
	Failed,
	/** Failed because it was unable to connect (safe to retry) */
	Failed_ConnectionError,
	/** Finished and was successful */
	Succeeded
};

UCLASS()
class ROBCOG_API AServerConnection : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AServerConnection();

	FString ServerMessage;

	ERequestVerb RequestVerb;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString ConfidenceRating;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;




	/** Content type to be applied for request */
	ERequestContentType RequestContentType;

	UFUNCTION(BlueprintCallable, Category = "FileSaver")
		static void SaveToFile(FString SaveDirectory, FString TextToSave, FString FileName);

	UFUNCTION(BlueprintCallable, Category = "FileSaver")
		static void SendRequest(FString SaveDirectory, FString TextToSave, FString FileName);

	static void SendRequestComplete(FString SaveDirectory, FString TextToSave, FString FileName);

	UFUNCTION(BlueprintCallable, Category = "FileSaver")
		void RequestLogin(FString Login, FString Password);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Construct Json Request", HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"), Category = "Request")
		static AServerConnection* ConstructRequestExt(UObject* WorldContextObject, ERequestVerb Verb, ERequestContentType ContentType);

	UFUNCTION(BlueprintCallable, Category = "Request")
		void SetVerb(ERequestVerb Verb);

	UFUNCTION(BlueprintCallable, Category = "Request")
		void SetContentType(ERequestContentType ContentType);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Construct Json Request (Empty)", HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"), Category = "Request")
		static AServerConnection* ConstructRequest(UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category = "Request")
		void ProcessRequest(const FString& Url);

	UFUNCTION(BlueprintCallable, Category = "Request")
		void AddToMessage(const FString& Message);

	void ClearMessage();
};