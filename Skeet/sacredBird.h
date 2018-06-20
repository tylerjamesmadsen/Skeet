#ifndef SACRED_BIRD_H
#define SACRED_BIRD_H

#include "bird.h"

class SacredBird : public Bird
{
private:
	//Velocity velocity;
	//Point point;
	//bool alive;
public:
	SacredBird();
	~SacredBird();

	void draw();
};
#endif // !SACRED_BIRD_H
