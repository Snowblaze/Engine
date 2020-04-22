#include "EngineConfig.h"

//#include <chrono>

#include "Game.hpp"

//using namespace std;
//using namespace chrono;

//const microseconds MS_PER_FRAME(16000);
//auto start = duration_cast<microseconds> (std::chrono::high_resolution_clock::now().time_since_epoch());
//
//void processInput()
//{
//
//}
//
//void update()
//{
//
//}
//
//void render()
//{
//
//}
//
//microseconds getTimeSinceStart()
//{
//	auto current = duration_cast<microseconds> (std::chrono::high_resolution_clock::now().time_since_epoch());
//	return current - start;
//}

//int main()
//{
//	microseconds lag(0);
//	microseconds previous = getTimeSinceStart();
//	int frame = 0;
//	while (true)
//	{
//		microseconds current = getTimeSinceStart();
//		microseconds elapsed = current - previous;
//		previous = current;
//		lag += elapsed;
//
//
//		processInput();
//
//		while (lag >= MS_PER_FRAME)
//		{
//			frame++;
//			cout << current.count() << " " << frame << endl;
//			update();
//			lag -= MS_PER_FRAME;
//		}
//
//		render();
//	}
//	return 0;
//}

int main()
{
	Game* game = new Game();

	game->Initialize();
	game->RunLoop();
	game->Shutdown();

	return 0;
}