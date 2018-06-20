#ifndef BIRD
#define BIRD

#include "flyingObject.h"

class Bird : public FlyingObject
{
protected:
	//Velocity velocity;
	//Point point;
	//bool alive;

	const int radius = 15;

	int health = 1;
	int hitReward = 1;

public:
	Bird();
	~Bird();

	int getHealth() { return this->health; }
	int getHitReward() { return this->hitReward; }

	void setHealth(int health) { this->health = health; }
	void setHitReward(int hitReward) { this->hitReward = hitReward; }

	virtual int hit();
	virtual void draw() = 0;
};

#endif // !BIRD
