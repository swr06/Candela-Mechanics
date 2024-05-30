#pragma once 

#include <glm/glm.hpp>

#include <iostream>

namespace Candela {

	enum PhysicsShape : uint8_t {
		Cube,
		Sphere
	};

	class PhysicsEntity {

	public :
		PhysicsEntity() : Position(glm::vec3(0.)), Velocity(glm::vec3(0.)), Shape(PhysicsShape::Cube) {

		}

		PhysicsEntity(PhysicsShape s, const glm::vec3& p, const glm::vec3& v) {
			Shape = s; 
			Position = p; 
			Velocity = v;
		}

		glm::vec3 Position;
		glm::vec3 Velocity;
		PhysicsShape Shape;
	};

}