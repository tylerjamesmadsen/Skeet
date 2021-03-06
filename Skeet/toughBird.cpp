#include "toughBird.h"
#include "uiDraw.h"
#include <cassert>

ToughBird::ToughBird()
{
	/*this->point.setX(0.0f);
	this->point.setY(0.0f);
	this->velocity.setDx(0.0f);
	this->velocity.setDy(0.0f);*/
	this->velocity.setDx((float)random(2.0, 4.0));

	if (this->point.getY() < 0.0f)
	{
		this->velocity.setDy((float)random(0.0, 3.0));
		assert(this->velocity.getDy() >= 0.0f && this->velocity.getDy() <= 4.0f);
	}
	else if (this->point.getY() > 0.0f)
	{
		this->velocity.setDy((float)random(-3.0, 0.0));
		assert(this->velocity.getDy() >= -4.0f && this->velocity.getDy() <= 0.0f);

	}
	else
	{
		this->velocity.setDy((float)random(-3.0, 3.0));
		assert(this->velocity.getDy() >= -4.0f && this->velocity.getDy() <= 4.0f);
	}

	this->health = 3;
	this->hitReward = 1;
	this->killReward = 2;
	//this->alive = true;
}

ToughBird::~ToughBird()
{
}

int ToughBird::hit()
{
	this->setHealth(this->getHealth() - 1);
	if (this->getHealth() == 0)
	{
		this->kill();
		return hitReward + getKillReward();
	}

	return hitReward;
}

void ToughBird::draw()
{
	drawToughBird(this->point, radius, this->health);
}
