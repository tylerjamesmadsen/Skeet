#ifndef FLYING_OBJECT_H
#define FLYING_OBJECT_H

#include "velocity.h"
#include "point.h"

class FlyingObject {
protected:
	Velocity velocity;
	Point point;
public:
	FlyingObject();
	FlyingObject(Point point);
	FlyingObject(Point point, Velocity velocity);
	~FlyingObject();

	Point getPoint() { return this->point; }
	Velocity getVelocity() { return this->velocity; }

	void setPoint(Point point) { this->point = point; }
	void setVelocity(Velocity velocity) { this->velocity = velocity; }

	bool isAlive();
	void kill();
	void advance();
	void draw();
};

#endif // !FLYING_OBJECT_H

