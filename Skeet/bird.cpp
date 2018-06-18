#include "bird.h"

Bird::Bird()
{
	// TODO
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
	// TODO
	return 0;
}
