// Copyright 2017, Institute for Artificial Intelligence - University of Bremen
// Author: Andrei Haidu (http://haidu.eu)

#include "RobCoGGameModeBase.h"
#include "RobCoG.h"


ARobCoGGameModeBase::ARobCoGGameModeBase()
{
	PopUpMessage = FString(TEXT(""));
	EndLevelMessage = FString(TEXT(""));

}

void ARobCoGGameModeBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	UpdateTextBoxes();
}

void ARobCoGGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	NumberOfPeople = "1";
	ReadyToStart = true;
	UpdateNumberText(FString(TEXT("The Number is set to " + NumberOfPeople)));
	CurrentProgress = ELevelProgress::Playing;

	//Pointer to the character currently in play
	ThePlayer = Cast<AMyCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	//Bind the delegates to a function call
	if (ThePlayer)
	{
		ThePlayer->PopUp.AddDynamic(this, &ARobCoGGameModeBase::PopUp);
		ThePlayer->Sub.AddDynamic(this, &ARobCoGGameModeBase::Submit);
	}
}

void ARobCoGGameModeBase::UpdateRightText(FString Message)
{
	DisplayMessageRight = Message;
}

void ARobCoGGameModeBase::UpdateLeftText(FString Message)
{
	DisplayMessageLeft = Message;
}

void ARobCoGGameModeBase::UpdateNumberText(FString Message)
{
	DisplayNumberText = Message;
}

void ARobCoGGameModeBase::UpdateWarningText(FString Message)
{
	DisplayWarningText = Message;
}

void ARobCoGGameModeBase::UpdateTextBoxes()
{
	switch (LevelName)
	{
	case ECurrentLevel::TutorialLevel:

		//Help text to display at the beginig of the game
		UpdateLeftText(FString(TEXT("Use W,A,S,D keys to move around the kitchen.\nFeel free to look anywhere and try anything!")));
		UpdateRightText(FString(TEXT("You can use BOTH your hands! \nUse TAB to switch between them!")));

		if (ThePlayer)
		{
			//Display message when focused on an interractive item
			if (ThePlayer->HighlightedActor)
			{
				if (ThePlayer->AssetStateMap.Contains(ThePlayer->HighlightedActor))
				{
					UpdateLeftText(FString(TEXT("You can open and close drawers or doors.")));
					UpdateRightText(FString(TEXT("You need a free hand \nin order to do that!")));
				}

				else if (ThePlayer->ItemMap.Contains(ThePlayer->HighlightedActor))
				{
					UpdateLeftText(FString(TEXT("You can interract with items.\nPress click to pick up!")));
					if (ThePlayer->HighlightedActor->ActorHasTag(FName(TEXT("Stackable"))))
					{
						UpdateRightText(FString(TEXT("To pick stacks use Right Click.\nYou need two hands for that!")));
					}
				}
			}

			//Rotation and positioning adjustment messages
			if (ThePlayer->SelectedObject && !ThePlayer->TwoHandSlot.Num())
			{
				UpdateLeftText(FString(TEXT("You can adjust the position with arrow keys.\nYou can press 'R' to enter rotation mode!")));
				if (ThePlayer->RotationAxisIndex)
				{
					UpdateRightText(FString(TEXT("Press 'R' to switch between axis.\nUse the mouse wheel to adjust rotation.")));
				}
			}

			//Message when the user holds stacks
			if (ThePlayer->TwoHandSlot.Num())
			{
				UpdateLeftText(FString(TEXT("You can create more stacks by placing \nthe same type of items on top of eachother")));
				UpdateRightText(FString(TEXT("We don't want to overwork the robot.\nYou can only pick a limited\nnumber of items at once!")));
			}
		}
		break;

	case ECurrentLevel::BreakfastLevel:

		if (CurrentProgress == ELevelProgress::Playing)
		{
			UpdateRightText(FString(TEXT("You can press 'P' at any time\nto check the hotkeys.")));
			UpdateLeftText(FString(TEXT("When the task is completed\npress 'O' to submit.")));
		}
		else
		{
			UpdateRightText(FString(TEXT("")));
			UpdateLeftText(FString(TEXT("")));
		}

		break;
	case ECurrentLevel::CleaningLevel:
		if (CurrentProgress == ELevelProgress::Playing)
		{
			UpdateRightText(FString(TEXT("You can press 'P' at any time\nto check the hotkeys.")));
			UpdateLeftText(FString(TEXT("When the task is completed\npress 'O' to submit.")));
		}
		else
		{
			UpdateRightText(FString(TEXT("")));
			UpdateLeftText(FString(TEXT("")));
		}
		break;
	}
	return;
}

void ARobCoGGameModeBase::PopUp(FString Message)
{

	PopUpMessage = Message;

	GetWorld()->GetTimerManager().SetTimer(ResetPopUpTimer, this, &ARobCoGGameModeBase::ResetPopUp, 3.f, false);
}

void ARobCoGGameModeBase::Submit(FString Message, bool bEndOrResume)
{
	EndLevelMessage = Message;

	if (bEndOrResume)
	{
		if (CurrentProgress == ELevelProgress::Playing)
		{
			CurrentProgress = ELevelProgress::Finish;
		}
		else if (CurrentProgress == ELevelProgress::Finish)
		{
			CurrentProgress = ELevelProgress::Exit;
		}
	}
	else
	{
		CurrentProgress = ELevelProgress::Playing;
	}
}

void ARobCoGGameModeBase::ResetPopUp()
{
}

void ARobCoGGameModeBase::SetRandomNumberOfPeople()
{
	NumberOfPeople = FString::FromInt(FMath::FRandRange(1, 12));
	UpdateNumberText(FString(TEXT("The Number is set to " + NumberOfPeople)));
	ReadyToStart = true;
}

void ARobCoGGameModeBase::ValidateNumberOfPeople(FString Number)
{
	if (!Number.IsNumeric()) {
		UpdateNumberText(FString(TEXT("Enter valid number.")));
		ReadyToStart = false;
		return;
	}

	int NumberInt = FCString::Atoi(*Number);

	if (NumberInt < 1 || NumberInt > 12) {
		UpdateNumberText(FString(TEXT("Enter a valid number between 1 and 12")));
		ReadyToStart = false;
		return;
	}
	NumberOfPeople = Number;
	ReadyToStart = true;
	UpdateNumberText(FString(TEXT("The Number is set to " + NumberOfPeople)));
}

void ARobCoGGameModeBase::SetRandomLevel()
{
}

void ARobCoGGameModeBase::ExitToMenu()
{
	UGameplayStatics::OpenLevel(GetWorld(), "BeginPlayRoom");
}
