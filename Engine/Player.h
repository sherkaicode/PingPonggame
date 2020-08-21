#pragma once

class Player
{
public:
	void clampScreen();
	int x;
	int y = 300;
	static constexpr int width = 10;
	static constexpr int height = 100;
	bool win = false;
	// Commit upload
};