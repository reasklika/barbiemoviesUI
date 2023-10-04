#pragma once
#include "widget.h"

class button : public widget
{
protected:
	float m_position[2];
	void draw();
	void update();
	button();
public: 
	float getPosX() { return m_position[0]; }	//Store the x 
	float getPosY() { return m_position[1]; }	//and y values of the center of a button
	void setPosX(float x) { m_position[0] = x; }	//Return the x
	void setPosY(float y) { m_position[1] = y; }	//and y values of a button
};
