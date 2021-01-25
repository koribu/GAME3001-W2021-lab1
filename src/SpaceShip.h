#pragma once
#ifndef __SPACE_SHIP__
#define __SPACE_SHIP__
#include "DisplayObject.h"
#include "TextureManager.h"

class SpaceShip final : public DisplayObject
{
public:
	SpaceShip();
		~SpaceShip();
	
	void draw() override;
	void update() override;
	void clean() override;

	void setMaxSpeed(const float maxSpeed);
	void setDestination(const glm::vec2 destination);
	void setOrientation(const glm::vec2 orientation);
	void setAngle(const float angle);
	float getAngle() const;
private:
	glm::vec2 m_destination;
	glm::vec2 m_targetDirection;
	glm::vec2 m_orientation;
	float m_angle;
	
	void m_Move();

	float m_maxSpeed;
};

#endif
