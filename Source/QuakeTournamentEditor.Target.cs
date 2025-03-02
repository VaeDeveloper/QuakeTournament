// Copyright Quake Tournament. All rights reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class QuakeTournamentEditorTarget : TargetRules
{
	public QuakeTournamentEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "QuakeTournament" } );
	}
}
