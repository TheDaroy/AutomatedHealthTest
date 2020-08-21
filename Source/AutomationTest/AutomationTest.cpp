// Copyright Epic Games, Inc. All Rights Reserved.

#include "AutomationTest.h"
#include "Tests/AutomationCommon.h"
#include "Tests/AutomationEditorCommon.h"
#include "AssetSelection.h"
#include "Engine/StaticMesh.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, AutomationTest, "AutomationTest" );

//IMPLEMENT_SIMPLE_AUTOMATION_TEST(FMytest, "CustomTests.Test", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

//bool FMytest::RunTest(const FString& Parameters)
//{
//	FAutomationEditorCommonUtils::LoadMap(TEXT("C:/Users/theda/Documents/Unreal Projects/AutomationTest/Content/FirstPersonCPP/Maps/FirstPersonExampleMap.umap"));
//	UObject* EditorCylinderMesh = (UStaticMesh*)StaticLoadObject(UStaticMesh::StaticClass(), NULL, TEXT("/Engine/EditorMeshes/EditorCylinder.EditorCylinder"), NULL, LOAD_None, NULL);
//	TestNull("Null is null", nullptr);
//	TestNotNull("Mesh is valid", EditorCylinderMesh);
//	TestNotNull("World exists", GWorld.GetReference());
//	TestNotNull("I can instantiate meshes!", FActorFactoryAssetProxy::AddActorForAsset(EditorCylinderMesh));
//	TestTrue("One plus one should equal 2", 1+1 == 2);
//	//TestFalse("One plus one shouldn't equal 2", 1 + 1 == 2);
//	TestEqual("One plus one should equal 2", 1 + 1 , 2);
//	return true;
//}
// 