#include "../Board.h"

Board::Board() : currentPlayer(Player::PLAYER_X) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            board[i][j] = Player::NONE;
        }
    }
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
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    for (int i = 1; i < 3; ++i) {
        SDL_RenderDrawLine(renderer, i * 200, 0, i * 200, 600);
        SDL_RenderDrawLine(renderer, 0, i * 200, 600, i * 200);
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == Player::PLAYER_X) {
                SDL_RenderDrawLine(renderer, j * 200, i * 200, (j + 1) * 200, (i + 1) * 200);
                SDL_RenderDrawLine(renderer, (j + 1) * 200, i * 200, j * 200, (i + 1) * 200);
            } else if (board[i][j] == Player::PLAYER_O) {
                drawCircle(renderer, j * 200 + 100, i * 200 + 100, 100);
            }
        }
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

void Board::drawCircle(SDL_Renderer* renderer, int x, int y, int radius) {
    int offsetX, offsetY, d;
    offsetX = 0;
    offsetY = radius;
    d = radius - 1;
    while (offsetY >= offsetX) {
        SDL_RenderDrawPoint(renderer, x + offsetX, y + offsetY);
        SDL_RenderDrawPoint(renderer, x + offsetY, y + offsetX);
        SDL_RenderDrawPoint(renderer, x - offsetX, y + offsetY);
        SDL_RenderDrawPoint(renderer, x - offsetY, y + offsetX);
        SDL_RenderDrawPoint(renderer, x + offsetX, y - offsetY);
        SDL_RenderDrawPoint(renderer, x + offsetY, y - offsetX);
        SDL_RenderDrawPoint(renderer, x - offsetX, y - offsetY);
        SDL_RenderDrawPoint(renderer, x - offsetY, y - offsetX);
        if (d >= 2 * offsetX) {
            d -= 2 * offsetX + 1;
            offsetX += 1;
        } else if (d < 2 * (radius - offsetY)) {
            d += 2 * offsetY - 1;
            offsetY -= 1;
        } else {
            d += 2 * (offsetY - offsetX - 1);
            offsetY -= 1;
            offsetX += 1;
        }
    }
}