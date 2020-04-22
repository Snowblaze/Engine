#ifndef GAME_HPP
#define GAME_HPP

#include "Renderer/Renderer.hpp"

class Game
{
public:
	Game();

	bool Initialize();

	void RunLoop();

	void Shutdown();

private:
	void ProcessInput();
	void UpdateGame();
	void GenerateOutput();

	Renderer* renderer;
	bool mIsRunning;
};

#endif