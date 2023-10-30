#pragma once
#include "plugin.h"
#include <GLFW/glfw3.h>

class Editor : public Plugin {
    public:
        void init(GLFWwindow* window);
        void frame();
        void shutdown();
};