// Copyright Quake Tournament. All rights reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class QuakeTournamentTarget : TargetRules
{
	public QuakeTournamentTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "QuakeTournament" } );
	}
}
