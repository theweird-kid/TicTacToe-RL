#ifndef GAME_H
#define GAME_H

#include <SDL2/SDL.h>
#include <iostream>
#include "Board.h"

class Game {
public:
    Game();
    ~Game();
    void run();

private:
    void processEvents();
    void update();
    void render();

    SDL_Window* window;
    SDL_Renderer* renderer;
    bool quit;
    Board board;
};

#endif