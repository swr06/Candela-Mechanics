#pragma once 

#include <glm/glm.hpp>
#include <iostream>
#include <vector>

#include "PhysicsEntity.h"

namespace Candela {

	class PhysicsHandler {

	public :
		std::vector<PhysicsEntity> EntityList;

		void Initialize();
		void OnUpdate(float dt);
	};

}