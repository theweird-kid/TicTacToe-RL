#include "../Game.h"

Game::Game() : window(nullptr), renderer(nullptr), quit(false), board(nullptr) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "Failed to initialize SDL: " << SDL_GetError() << std::endl;
        exit(-1);
    }

    if (!(IMG_Init(IMG_INIT_PNG) & IMG_INIT_PNG)) {
        std::cerr << "Failed to initialize SDL_image: " << IMG_GetError() << std::endl;
        SDL_Quit();
        exit(-1);
    }

    window = SDL_CreateWindow("Tic Tac Toe",
                              SDL_WINDOWPOS_CENTERED,
                              SDL_WINDOWPOS_CENTERED,
                              600, 600,
                              SDL_WINDOW_SHOWN);
    if (!window) {
        std::cerr << "Failed to create window: " << SDL_GetError() << std::endl;
        IMG_Quit();
        SDL_Quit();
        exit(-1);
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer) {
        std::cerr << "Failed to create renderer: " << SDL_GetError() << std::endl;
        SDL_DestroyWindow(window);
        IMG_Quit();
        SDL_Quit();
        exit(-1);
    }

    board = std::make_unique<Board>(renderer);
}

Game::~Game() {
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    IMG_Quit();
    SDL_Quit();
}

void Game::run() {
    while (!quit) {
        processEvents();
        update();
        render();
    }
}

void Game::processEvents() {
    SDL_Event e;
    while (SDL_PollEvent(&e) != 0) {
        if (e.type == SDL_QUIT) {
            quit = true;
        } else if (e.type == SDL_MOUSEBUTTONDOWN) {
            int x, y;
            SDL_GetMouseState(&x, &y);
            board->handleClick(x, y);
        }
    }
}

void Game::update() {
    if (board->checkWin()) {
        std::cout << "Player " << (board->getCurrentPlayer() == Player::PLAYER_X ? "O" : "X") << " wins!" << std::endl;
        quit = true;
    }
}

void Game::render() {
    board->render(renderer);
    SDL_RenderPresent(renderer);
}