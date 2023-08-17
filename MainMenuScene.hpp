#ifndef MAINMENUSCENE_HPP
#define MAINMENUSCENE_HPP
#include "Scene.h"
#include "raylib.h"
class MainMenuScene : public Scene
{
public:
	void Load() override;
	void Update() override;
	void Draw() override;
	void Unload() override;

};

#endif // !MAINMENUSCENE_HPP
