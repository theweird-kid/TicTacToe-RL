#include "../Board.h"
#include <SDL2/SDL_image.h>

Board::Board(SDL_Renderer* renderer) : currentPlayer(Player::PLAYER_X), xTexture(nullptr), oTexture(nullptr) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            board[i][j] = Player::NONE;
        }
    }

    xTexture = loadTexture("/home/theweird-kid/dev/CPP/tic/src/static/X.png", renderer);
    oTexture = loadTexture("/home/theweird-kid/dev/CPP/tic/src/static/O.png", renderer);
}

Board::~Board() {
    SDL_DestroyTexture(xTexture);
    SDL_DestroyTexture(oTexture);
}

SDL_Texture* Board::loadTexture(const std::string& path, SDL_Renderer* renderer) {
    SDL_Surface* surface = IMG_Load(path.c_str());
    if (!surface) {
        std::cerr << "Failed to load texture: " << IMG_GetError() << std::endl;
        return nullptr;
    }
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_FreeSurface(surface);
    return texture;
}

void Board::handleClick(int x, int y) {
    int row = y / 200;
    int col = x / 200;
    if (board[row][col] == Player::NONE) {
        board[row][col] = currentPlayer;
        currentPlayer = (currentPlayer == Player::PLAYER_X) ? Player::PLAYER_O : Player::PLAYER_X;
    }
}

void Board::render(SDL_Renderer* renderer) {
    // Set background color to white
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderClear(renderer);

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            SDL_Rect rect = { j * 200, i * 200, 200, 200 };
            if (board[i][j] == Player::PLAYER_X) {
                SDL_RenderCopy(renderer, xTexture, nullptr, &rect);
            } else if (board[i][j] == Player::PLAYER_O) {
                SDL_RenderCopy(renderer, oTexture, nullptr, &rect);
            }
        }
    }

    // Set draw color to black for grid
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    for (int i = 1; i < 3; ++i) {
        SDL_RenderDrawLine(renderer, i * 200, 0, i * 200, 600);
        SDL_RenderDrawLine(renderer, 0, i * 200, 600, i * 200);
    }

}

bool Board::checkWin() {
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] != Player::NONE && board[i][0] == board[i][1] && board[i][1] == board[i][2]) return true;
        if (board[0][i] != Player::NONE && board[0][i] == board[1][i] && board[1][i] == board[2][i]) return true;
    }
    if (board[0][0] != Player::NONE && board[0][0] == board[1][1] && board[1][1] == board[2][2]) return true;
    if (board[0][2] != Player::NONE && board[0][2] == board[1][1] && board[1][1] == board[2][0]) return true;
    return false;
}

Player Board::getCurrentPlayer() const {
    return currentPlayer;
}

std::vector<std::vector<int>> Board::getState() const {
    std::vector<std::vector<int>> state(3, std::vector<int>(3));
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            state[i][j] = static_cast<int>(board[i][j]);
        }
    }
    return state;
}