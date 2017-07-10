// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "Engine/StaticMeshActor.h"
#include "CoreMinimal.h"
#include "COpenClose.generated.h"

class ACharacterController; // Use Forward Declaration. Including the header in COpenClose.cpp

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class CLICKINTERACTION_API UCOpenClose : public UActorComponent
{
	GENERATED_BODY()


public:
	// Sets default values for this component's properties
	UCOpenClose();

	UPROPERTY(EditAnyWhere)
		float ForceToApply;

	UPROPERTY(EditAnyWhere)
		bool bLocksComponent;

	ACharacterController * PlayerCharacter;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:

	AStaticMeshActor* ClickedActor;
	void AddForceToObject(float DeltaTime);
};
