#ifndef BOARD_H
#define BOARD_H

#include <SDL2/SDL.h>
#include <iostream>
#include <vector>

enum class Player { NONE, PLAYER_X, PLAYER_O };

class Board {
public:
    Board(SDL_Renderer* renderer);
    ~Board();
    void handleClick(int x, int y);
    void render(SDL_Renderer* renderer);
    bool checkWin();
    Player getCurrentPlayer() const;
    std::vector<std::vector<int>> getState() const;

private:
    Player board[3][3];
    Player currentPlayer;
    SDL_Texture* xTexture;
    SDL_Texture* oTexture;
    SDL_Texture* loadTexture(const std::string& path, SDL_Renderer* renderer);
};

#endif // BOARD_H