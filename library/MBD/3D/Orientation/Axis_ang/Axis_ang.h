#ifndef AXIS_ANG
#define AXIS_ANG

#include "Vect_3D.h"

class Axis_ang {
public:
	Axis_ang();
	Axis_ang(Vect_3D v_, double th_ = 0);
	~Axis_ang();
	Vect_3D v;
	double th = 0.0;
};

#endif