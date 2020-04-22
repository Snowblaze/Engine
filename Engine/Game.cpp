#include "Game.hpp"

Game::Game() : renderer(nullptr), mIsRunning(true)
{
}

bool Game::Initialize()
{
    renderer = new Renderer();
    renderer->Init();

    return true;
}

void Game::RunLoop()
{
    GenerateOutput();
}

void Game::Shutdown()
{
    renderer->Dispose();
}

void Game::ProcessInput()
{
}

void Game::UpdateGame()
{

}

void Game::GenerateOutput()
{
    while (!glfwWindowShouldClose(renderer->window))
    {
        renderer->DrawFrame();
    }
}