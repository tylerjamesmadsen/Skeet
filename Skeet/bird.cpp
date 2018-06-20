#include "bird.h"
#include "uiDraw.h"

#include <cassert>

Bird::Bird()
{
	// TODO
	this->point.setX(-200.0f);
	this->point.setY((float)random(-200.0,200.0));
	this->velocity.setDx((float)random(3.0,6.0));
	
	if (this->point.getY() < 0.0f)
	{
		this->velocity.setDy((float)random(0.0, 4.0));
		assert(this->velocity.getDy() >= 0.0f && this->velocity.getDy() <= 4.0f);
	}
	else if (this->point.getY() > 0.0f)
	{
		this->velocity.setDy((float)random(-4.0, 0.0));
		assert(this->velocity.getDy() >= -4.0f && this->velocity.getDy() <= 0.0f);

	}
	else
	{
		this->velocity.setDy((float)random(-4.0, 4.0));
		assert(this->velocity.getDy() >= -4.0f && this->velocity.getDy() <= 4.0f);
	}
	
	this->health = 1;
	//this->alive = true;
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
