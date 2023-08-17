#include "GameManager.hpp"
#include "MainMenuScene.hpp"
void GameManager::Initialize()
{

    this->AddScene("mainMenu", std::make_unique<MainMenuScene>());
    this->ChangeScene("mainMenu");
}

void GameManager::AddScene(const std::string& name, std::unique_ptr<Scene> scene)
{
    // Check if a scene with the same name already exists
    if (scenes.find(name) != scenes.end()) {
        TraceLog(LOG_ERROR, "GameManager::AddScene() A scene under the same name already exists. %s", name.c_str());
        return;
    }

    // Check if the provided scene pointer is already in the map
    for (const auto& pair : scenes) {
        if (pair.second.get() != scene.get()) {
            TraceLog(LOG_ERROR, "GameManager::AddScene() The provided scene is already added to the map. %s", name.c_str());
            return;
        }
    }

    // If both checks passed, add the scene to the map
    scenes[name] = std::move(scene);
}

void GameManager::ChangeScene(const std::string& name)
{
    if (this->currentScene != NULL)
    {
        this->currentScene->Unload();

    }
    if (scenes.find(name) == scenes.end()) {
        TraceLog(LOG_ERROR, "GameManager::ChangeScene() The specified scene doesnt exist %s", name.c_str());
        return;
    }
    this->currentScene = this->scenes[name].get();
    this->currentScene->Load();
}



Scene* GameManager::GetCurrentScene()
{
	return this->currentScene;
}


GameManager::~GameManager()
{

}
GameManager::GameManager()
{
    this->currentScene = nullptr;
}