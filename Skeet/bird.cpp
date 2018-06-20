#include "bird.h"
#include "uiDraw.h"

Bird::Bird()
{
	// TODO
	this->point.setX(0.0f);
	this->point.setY(0.0f);
	this->velocity.setDx(0.0f);
	this->velocity.setDy(0.0f);
	this->health = 1;
}

Bird::~Bird()
{
}

int Bird::hit()
{
	this->setHealth(this->getHealth() - 1);
	if (this->getHealth() == 0)
	{
		this->kill();
	}

	return hitReward;
}
