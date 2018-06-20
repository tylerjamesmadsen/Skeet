#include "flyingObject.h"

FlyingObject::FlyingObject()
{
	this->point.setX(0.0f);
	this->point.setY(0.0f);
	this->velocity.setDx(0.0f);
	this->velocity.setDy(0.0f);
	this->alive = true;
}

FlyingObject::~FlyingObject()
{
}

bool FlyingObject::isAlive()
{
	return this->alive;
}

void FlyingObject::kill()
{
	this->alive = false;
}

void FlyingObject::advance()
{
	// TODO
}
