#pragma once
#include "SDL.h"
#include <vector>

// Simple container for coordinates
struct Vector2
{
	float x;
	float y;
};


struct Ball
{
	Vector2 pos;
	Vector2 vel;
};

class Game
{
public:
	Game();
	// Initialize the game
	bool Initialize();
	// Runs the game loop until the game is over
	void RunLoop();
	// Shutdown the game
	void Shutdown();
private:
	// Helper functions for the game loop
	void ProcessInput();
	void UpdateGame();
	void GenerateOutput();
	// Window created by SDL
	SDL_Window* mWindow;
	// Renderer created by SDL
	SDL_Renderer* mRenderer;

	Uint32 mTicksCount;

	// Game should continue to run
	bool mIsRunning;


	// Objects center point
	Vector2 mPaddlePos;
	int mPaddleDir;
	
	std::vector<Ball> balls;
	Vector2 mPaddle2Pos;
	int mPaddle2Dir;

	//Vector2 mBallPos;

	// Velocity of ball
	//Vector2 mBallVel;


};
