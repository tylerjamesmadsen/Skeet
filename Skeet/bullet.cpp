#include "bullet.h"
#define _USE_MATH_DEFINES
#include <math.h>

#define BULLET_SPEED 10.0f

Bullet::Bullet()
{
	this->point.setX(0.0f);
	this->point.setY(0.0f);
	this->velocity.setDx(0.0f);
	this->angle = 60.0f;
}

void Bullet::fire(Point point, float angle)
{
	this->point = point;
	this->angle = angle;
	this->velocity.setDx(BULLET_SPEED * (-cos(M_PI / 180.0 * angle)));
	this->velocity.setDy(BULLET_SPEED * (sin(M_PI / 180.0 * angle)));
}
