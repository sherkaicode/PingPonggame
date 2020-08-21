#pragma once

class Ball
{
public:
	void update();
	void collision(int px, int py, int pwidth, int pheight);
	int x = 400 - 5;
	int y = 300 - 5;
	int vx = 2;
	int vy = 2;
	static constexpr int width = 10;
	static constexpr int height = 10;
	bool isGameOver = false;
	bool isWin = false;
};