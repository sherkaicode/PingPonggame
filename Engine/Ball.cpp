#include "Ball.h"
#include "Graphics.h"
#include "Player.h"

void Ball::update()
{
	x += vx;
	y += vy;
	
	const int right = x + width;
	if (x < 0)
	{
		x = 0;
		vx = 0;
		vy = 0;
		isGameOver = true;
		isWin = false;
	}
	else if (right >= Graphics::ScreenWidth)
	{
		x = Graphics::ScreenWidth - width;
		vx = 0;
		vy = 0;
		isGameOver = true;
		isWin = true;
	}
	
	const int bottom = y + height;
	if (y < 0)
	{
		y = 0;
		vy = -vy;
	}
	else if (bottom >= Graphics::ScreenHeight)
	{
		y = Graphics::ScreenHeight - height;
		vy = -vy;
	}
}

void Ball::collision(int px, int py, int pwidth, int pheight)
{
	const int pright = px + pwidth;
	const int pbottom = py + pheight;
	const int ballright = x + width;
	const int ballbottom = y + height;

	if (
		pright >= x &&
		px <= ballright &&
		pbottom >= y &&
		py <= ballbottom
		)
	{
		vx = -vx;
	}
}
