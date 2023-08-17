#ifndef SCENE_HPP
#define SCENE_HPP
class Scene {
public:
    virtual void Load() = 0;
    virtual void Update() = 0;
    virtual void Draw() = 0;
    virtual void Unload() = 0;
};

#endif
