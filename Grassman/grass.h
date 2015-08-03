#pragma once

#include "entity.h"

class Grass : public Entity
{
public:
	Grass() : Entity("grass.png")
	{
		this->group_id = 3;
	}

	void Update()
	{
	}
};
