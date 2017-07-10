// Fill out your copyright notice in the Description page of Project Settings.

#include "ServerConnection.h"
#include "RobCoG.h"
#include "Runtime/Online/HTTP/Public/Interfaces/IHttpRequest.h"
#include "Runtime/Online/HTTP/Public/HttpModule.h"
#include "Runtime/Json/Public/Serialization/JsonSerializer.h"
#include "Runtime/Core/Public/Templates/SharedPointer.h"
#include "Runtime/Json/Public/Dom/JsonObject.h"


// Sets default values
AServerConnection::AServerConnection()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ServerMessage = "";
}

// Called when the game starts or when spawned
void AServerConnection::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AServerConnection::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AServerConnection::SaveToFile(FString SaveDirectory, FString TextToSave, FString FileName)
{

	//IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	// CreateDirectoryTree returns true if the destination
	// directory existed prior to call or has been created
	// during the call.
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "start");

	// Get absolute file path
	FString AbsoluteFilePath = SaveDirectory + "/" + FileName;

	// Allow overwriting or file doesn't already exist
	//FFileHelper::SaveStringToFile(TextToSave, *AbsoluteFilePath);
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "write to file");
}

void AServerConnection::SendRequest(FString SaveDirectory, FString TextToSave, FString FileName)
{
	/*TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());

	JsonObject->SetStringField(TEXT("some_string_field"), *FString::Printf(TEXT("%s"), "Test123"));

	FString OutputString;

	TSharedRef<TJsonWriter<TCHAR>> JsonWriter = TJsonWriterFactory<>::Create(&OutputString);

	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), JsonWriter);

	TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();

	HttpRequest->SetVerb("POST");

	HttpRequest->SetHeader("Content-Type", "application/json");

	HttpRequest->SetURL(*FString::Printf(TEXT("%s"), "http://localhost:8080/"));

	HttpRequest->SetContentAsString(OutputString);

	//HttpRequest->OnProcessRequestComplete().BindUObject(this, &YourClass::OnYourFunctionCompleted);

	HttpRequest->ProcessRequest();
	*/
}

void AServerConnection::SendRequestComplete(FString SaveDirectory, FString TextToSave, FString FileName)
{
	/*FString SomeOtherVariable;
	//if (bWasSuccessful && Response->GetContentType() == "application/json")
	//{
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());

	//TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(Response->GetContentAsString());

	//FJsonSerializer::Deserialize(JsonReader, JsonObject);

	SomeOtherVariable = JsonObject->GetStringField("some_response_field");
	*/
	//}
	//else
	//{
	// Handle error here
	//}
}

void AServerConnection::RequestLogin(FString Login, FString Password)
{

}

AServerConnection * AServerConnection::ConstructRequestExt(UObject * WorldContextObject, ERequestVerb Verb, ERequestContentType ContentType)
{
	AServerConnection* Request = ConstructRequest(WorldContextObject);

	Request->SetVerb(Verb);
	Request->SetContentType(ContentType);

	return Request;
}

void AServerConnection::SetVerb(ERequestVerb Verb)
{
	RequestVerb = Verb;
}

void AServerConnection::SetContentType(ERequestContentType ContentType)
{
	RequestContentType = ContentType;
}

AServerConnection * AServerConnection::ConstructRequest(UObject * WorldContextObject)
{
	return NewObject<AServerConnection>();
}

void AServerConnection::ProcessRequest(const FString& Url)
{
	TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
	FString TrimmedUrl = Url;
	TrimmedUrl.Trim();
	TrimmedUrl.TrimTrailing();

	HttpRequest->SetURL(TrimmedUrl);

	switch (RequestVerb)
	{
	case ERequestVerb::GET:
		HttpRequest->SetVerb(TEXT("GET"));
		break;

	case ERequestVerb::POST:
		HttpRequest->SetVerb(TEXT("POST"));
		break;

	case ERequestVerb::PUT:
		HttpRequest->SetVerb(TEXT("PUT"));
		break;

	case ERequestVerb::DEL:
		HttpRequest->SetVerb(TEXT("DELETE"));
		break;
	default:
		break;
	}

	// Set content-type
	switch (RequestContentType)
	{
	case ERequestContentType::json:
	{
		HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));

		// Serialize data to json string
		//FString OutputString = "test";
		//TSharedRef< TJsonWriter<> > Writer = TJsonWriterFactory<>::Create(&OutputString);
		//FJsonSerializer::Serialize(RequestJsonObj->GetRootObject().ToSharedRef(), Writer);

		// Set Json content
		HttpRequest->SetContentAsString(ServerMessage);
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("%d"), HttpRequest->GetContentLength());
		//UE_LOG(LogVaRest, Log, TEXT("Request (json): %s %s %sJSON(%s%s%s)JSON"), *HttpRequest->GetVerb(), *HttpRequest->GetURL(), LINE_TERMINATOR, LINE_TERMINATOR, *OutputString, LINE_TERMINATOR);

		break;
	}

	default:
		break;
	}
	//for (TMap<FString, FString>::TConstIterator It(RequestHeaders); It; ++It)
	//{
	//HttpRequest->SetHeader(It.Key(), It.Value());
	//}

	// Bind event
	//HttpRequest->OnProcessRequestComplete().BindUObject(this, &AMyActor::SendRequestComplete);

	// Execute the request
	HttpRequest->SetVerb(TEXT("POST"));
	if (!HttpRequest->ProcessRequest()) {
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Problem processing the request "));
	}
	else {
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, HttpRequest->GetVerb());
		for (FString header : HttpRequest->GetAllHeaders()) {
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, header);
		}
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("success"));
	}
	ClearMessage();
}

void AServerConnection::AddToMessage(const FString & Message)
{
	ServerMessage += "{" + Message + "}";
}

void AServerConnection::ClearMessage() {
	ServerMessage = "";
}
