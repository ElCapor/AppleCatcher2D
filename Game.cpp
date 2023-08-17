#include "Game.hpp"

Game::Game()
{
    this->g_GameManager = new GameManager();

}

bool Game::Initialize()
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Game");

    SetTargetFPS(60);

    this->g_GameManager->Initialize();
    
    return true;
}

void Game::Update()
{
    // Update values here
    this->g_GameManager->GetCurrentScene()->Update();
}

void Game::Render()
{
    // draw everything here
    BeginDrawing();

    ClearBackground(RAYWHITE);
    this->g_GameManager->GetCurrentScene()->Draw();


    EndDrawing();
}
void Game::Run()
{
    this->Initialize();
    while (!WindowShouldClose())
    {
        this->Update();
        this->Render();
    }
    CloseWindow();
}

Game::~Game()
{
    
}