#include "toughBird.h"
#include "uiDraw.h"

ToughBird::ToughBird()
{
	/*this->point.setX(0.0f);
	this->point.setY(0.0f);
	this->velocity.setDx(0.0f);
	this->velocity.setDy(0.0f);*/
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
