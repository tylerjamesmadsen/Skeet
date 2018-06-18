#include "flyingObject.h"

/*Constructors*/
FlyingObject::FlyingObject()
{
	// TODO
}

FlyingObject::FlyingObject(Point point)
{
	this->point = point;
	this->velocity.setDx(0.0f);
	this->velocity.setDy(0.0f);
}

FlyingObject::FlyingObject(Point point, Velocity velocity)
{
	this->point = point;
	this->velocity = velocity;
}

FlyingObject::~FlyingObject()
{
}

bool FlyingObject::isAlive()
{
	// TODO
}

void FlyingObject::kill()
{
	// TODO
}

void FlyingObject::advance()
{
	// TODO
}

void FlyingObject::draw()
{
	// TODO
}
