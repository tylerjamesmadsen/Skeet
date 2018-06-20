#include "standardBird.h"
#include "uiDraw.h"

StandardBird::StandardBird()
{
	// TODO
	/*this->point.setX(0.0f);
	this->point.setY(0.0f);
	this->velocity.setDx(0.0f);
	this->velocity.setDy(0.0f);*/
	this->health = 1;
	this->hitReward = 1;
	//this->alive = true;
}

StandardBird::~StandardBird()
{
}

void StandardBird::draw()
{
	drawCircle(this->point, radius);
}
