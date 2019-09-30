
#include <iostream>

#include "InputHandler.hpp"
#include "SDL2/SDL.h"

#include <functional>

void InputHandler::doInputLoop(){
   	SDL_Event event;

    while( !quit ){
		SDL_PollEvent(&event);
		
		switch (event.type)
        {
			case SDL_KEYDOWN:
                for(auto l : this->keyDownListeners){
                    l(event.key.keysym.sym);
                }
                break;
            case SDL_KEYUP:
                for(auto l : this->keyUpListeners){
                    l(event.key.keysym.sym);
                } 
                break;
        case SDL_QUIT:
            quit = true;
            break;
        }

	}
}

void InputHandler::addKeyDownListener(std::function<void(SDL_Keycode sdlKey)> listener){
    this->keyDownListeners.push_back(listener);
}

void InputHandler::addKeyUpListener(std::function<void(SDL_Keycode sdlKey)> listener){
    this->keyUpListeners.push_back(listener);
}