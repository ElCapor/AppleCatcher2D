#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include <memory>
#include <map>
#include "Scene.h"
#include <string>
#include "raylib.h"


class GameManager {
public:
    
    void Initialize();
    void AddScene(const std::string& name, std::unique_ptr<Scene> scene);
    void ChangeScene(const std::string& name);
    Scene* GetCurrentScene();

    GameManager();
    ~GameManager();

    std::map<std::string, std::unique_ptr<Scene>> scenes;
    Scene* currentScene;
};

#endif // GAMEMANAGER_H
