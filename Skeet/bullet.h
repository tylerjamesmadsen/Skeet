#ifndef BULLET_H
#define BULLET_H

#include "flyingObject.h"
#include "point.h"

class Bullet : public FlyingObject
{
private:
	//Velocity velocity;
	//Point point;
	//bool alive;

	float angle = 60.0f;
public:
	Bullet();

	void fire(Point point, float angle);
	void advance();
	void draw();
};
#endif // !BULLET_H

