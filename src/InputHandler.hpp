
#pragma once

#include <functional>
#include <vector>

class InputHandler{
    bool quit = false;
    
    std::vector<std::function<void(int sdlKey)>> keyDownListeners;
    std::vector<std::function<void(int sdlKey)>> keyUpListeners;

    public:
        void doInputLoop();
        void addKeyDownListener(std::function<void(int sdlKey)> listener);
        void addKeyUpListener(std::function<void(int sdlKey)> listener);

};
