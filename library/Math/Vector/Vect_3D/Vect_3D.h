#ifndef VECT_3D
#define VECT_3D

class Vect_3D {
public:
	Vect_3D(double vx_ = 0, double vy_ = 0, double vz_ = 0);
	~Vect_3D();
	double x = 0;
	double y = 0;
	double z = 0;
};

#endif