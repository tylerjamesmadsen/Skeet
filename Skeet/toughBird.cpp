#include "toughBird.h"
#include "uiDraw.h"

ToughBird::ToughBird()
{
	this->point.setX(0.0f);
	this->point.setY(0.0f);
	this->velocity.setDx(0.0f);
	this->velocity.setDy(0.0f);
	this->health = 3;
	this->hitReward = 1;
}

ToughBird::~ToughBird()
{
}

void ToughBird::draw()
{
	drawToughBird(this->point, radius, this->health);
}
