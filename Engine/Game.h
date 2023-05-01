/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */
	void DrawMando(float x, float y, float width, float height);
	void DrawBlaster(float x, float y, float width, float height);
	void DrawIntro(float x, float y, float width, float height);
	void ScreenBoundary(float& x, float& y, float width, float height);
	void MoveMando(float& x, float& y);
	bool BoxCollision(float& x1, float& y1, float& x2, float& y2, float width1, float height1, float width2, float height2);
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables   */
	//Mandalorian
	float mandoPosX;
	float mandoPosY;
	const float mandoWidth;
	const float mandoHeight;
	//Blaster
	float blasterPosX;
	float blasterPosY;
	const float blasterWidth;
	const float blasterHeight;
	//Splash Intro
	float introPosX;
	float introPosY;
	const float introHeight;
	const float introWidth;
	bool isBlasterCollected = false;
	bool gameStarted = false;
	/********************************/
};