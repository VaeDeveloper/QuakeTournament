// Fill out your copyright notice in the Description page of Project Settings.

#include "QuakeTournament.h"

#include "BlueprintEditorSettings.h"
#include "Modules/ModuleManager.h"

DEFINE_LOG_CATEGORY(LogQuakeTournament);

void FQuakeTournamentModule::StartupModule()
{
	
#if WITH_EDITOR

	/*
	 * For new blueprints disable initial node creation, because sometimes for example tick node can work
	 * , but it is visually disabled.
	 */
	auto* Settings = GetMutableDefault<UBlueprintEditorSettings>();
	if (Settings->bSpawnDefaultBlueprintNodes == true)
	{
		Settings->bSpawnDefaultBlueprintNodes = false;
		Settings->PostEditChange();
		Settings->SaveConfig();
	}
#endif
	
}

void FQuakeTournamentModule::ShutdownModule()
{
}

bool FQuakeTournamentModule::IsGameModule() const
{
	return true;
}

IMPLEMENT_PRIMARY_GAME_MODULE( FQuakeTournamentModule, QuakeTournament, "QuakeTournament" );
