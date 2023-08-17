#ifndef GAME_H
#define GAME_H
#include <raylib.h>
#include "GameManager.hpp";

class Game {
public:

	GameManager* g_GameManager;
	bool Initialize();

	void Update();

	void Render();

public:
	Game();
	~Game();
	void Run();
};

#endif // !GAME_H
