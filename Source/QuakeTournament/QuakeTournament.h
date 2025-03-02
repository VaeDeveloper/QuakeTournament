// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(LogQuakeTournament, All, All);

class FQuakeTournamentModule : public FDefaultGameModuleImpl
{
	
public:

	virtual void StartupModule() override;
	
	virtual void ShutdownModule() override;
	
	virtual bool IsGameModule() const override;
	
};