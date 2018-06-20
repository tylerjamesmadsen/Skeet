#include "bird.h"
#include "uiDraw.h"

Bird::Bird()
{
	// TODO
	this->point.setX(0.0f);
	this->point.setY(0.0f);
	this->velocity.setDx(0.0f);
	this->velocity.setDy(0.0f);
	this->setHealth(1);
}

Bird::Bird(Point point)
{
	this->point = point;
	this->velocity.setDx(0.0f);
	this->velocity.setDy(0.0f);
}

Bird::Bird(Point point, Velocity velocity)
{
	this->point = point;
	this->velocity = velocity;
}

Bird::~Bird()
{
}

int Bird::hit()
{
	return hitReward;
}

void Bird::draw()
{
	drawCircle(this->point, radius);
}
