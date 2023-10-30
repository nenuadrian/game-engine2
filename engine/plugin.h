#pragma once
#include <GLFW/glfw3.h>

class Plugin {
    public:
    virtual void init(GLFWwindow *window) {};
    virtual void frame(){};
    virtual void shutdown(){};
};