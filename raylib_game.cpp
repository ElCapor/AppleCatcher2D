#include "raylib.h"
#include "Game.hpp"

Game* g_Game;
int main()
{
	g_Game = new Game(); // Allocate memory for g_Game

	g_Game->Run();

	delete g_Game; // Deallocate memory for g_Game before exiting

	return 0;
}