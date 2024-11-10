#ifndef BOARD_H
#define BOARD_H

#include <SDL2/SDL.h>
#include <iostream>

enum class Player { NONE, PLAYER_X, PLAYER_O };

class Board {
public:
    Board();
    void handleClick(int x, int y);
    void render(SDL_Renderer* renderer);
    bool checkWin();
    Player getCurrentPlayer() const;

private:
    Player board[3][3];
    Player currentPlayer;
    void drawCircle(SDL_Renderer* renderer, int x, int y, int radius);
};

#endif