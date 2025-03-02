// Copyright Quake Tournament. All rights reserved.

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