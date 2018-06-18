#ifndef BULLET_H
#define BULLET_H

#include "flyingObject.h"
#include "point.h"

class Bullet : public FlyingObject
{
private:
	float angle = 60.0f;
public:
	Bullet();

	void fire(Point point, float angle);
};
#endif // !BULLET_H

