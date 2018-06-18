#ifndef BIRD
#define BIRD

#include "flyingObject.h"

class Bird : public FlyingObject
{
protected:
	int health;
	int hitReward;

public:
	Bird();
	Bird(Point point);
	Bird(Point point, Velocity velocity);
	~Bird();

	int getHealth() { return this->health; }
	int getHitReward() { return this->hitReward; }

	void setHealth(int health) { this->health = health; }
	void setHitReward(int hitReward) { this->hitReward = hitReward; }

	int hit();
};

#endif // !BIRD
