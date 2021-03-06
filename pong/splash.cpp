#include "Splash.h"
#include "Header.h"
#include <cstdio>
void Splash::init(int a_font) { font = a_font; }

void Splash::play() { timer = 3.f; }

void Splash::draw()
{
	char buffer[80];
	sprintf_s(buffer, "Prepare for War: %f", timer);
	sfw::drawString(font, "Prepare for War:", 100, 100, 20, 20, 0.0f, '\000', RED);
	sfw::drawLine(100, 80, 100 + 500 * (timer / 3.f), 80);
}

void Splash::step() { timer -= sfw::getDeltaTime(); }

APP_STATE Splash::next()
{
	if (timer < 0 || sfw::getKey('P'))
		return GAME;

	return SPLASH;
}