#ifndef TOUGH_BIRD_H
#define TOUGH_BIRD_H

#include "bird.h"

class ToughBird : public Bird
{
private:
	//Velocity velocity;
	//Point point;
	//bool alive;

	const int killReward = 2;
public:
	ToughBird();
	~ToughBird();

	int getKillReward() { return killReward; }

	void draw();
};


#endif // !TOUGH_BIRD_H
