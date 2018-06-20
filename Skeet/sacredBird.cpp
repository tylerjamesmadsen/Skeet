#include "sacredBird.h"
#include "uiDraw.h"

SacredBird::SacredBird()
{
	this->point.setX(0.0f);
	this->point.setY(0.0f);
	this->velocity.setDx(0.0f);
	this->velocity.setDy(0.0f);
	this->health = 1;
	this->hitReward = -10;
}

SacredBird::~SacredBird()
{
}

void SacredBird::draw()
{
	drawSacredBird(this->point, this->radius);
}
