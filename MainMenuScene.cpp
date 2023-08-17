#include "MainMenuScene.hpp"

void MainMenuScene::Load()
{
	//loading logic here
	TraceLog(DEBUG, "MainMenuScene::Load");
}

void MainMenuScene::Update()
{
	// Update logic here
	
}

void MainMenuScene::Draw()
{
	// Draw logic here

	DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

}

void MainMenuScene::Unload()
{
	// Unload logic here
	TraceLog(DEBUG, "MainMenuScene::Unload");
}