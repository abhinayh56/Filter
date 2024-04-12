#ifndef ORIENTATION_3D_QUAT
#define ORIENTATION_3D_QUAT

class Quat {
public:
	Quat(double q0_ = 1, double q1_ = 0, double q2_ = 0, double q3_ = 0);
	~Quat();
	double q0 = 1;
	double q1 = 0;
	double q2 = 0;
	double q3 = 0;
};

#endif