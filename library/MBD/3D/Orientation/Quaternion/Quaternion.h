#ifndef QUATERNION
#define QUATERNION

#include <math.h>
#include "data_type_geometry.h"

class Quaternion
{
public:
	Quaternion();
	~Quaternion();
	double get_scalar(Quat q1);
	Vect_3D get_vector(Quat q1);
	Quat identity();
	Quat zeros();
	Quat ones();
	Quat add(Quat q1, Quat q2);
	Quat sub(Quat q1, Quat q2);
	Quat mul(Quat q1, Quat q2);
	Quat mul_scalar(Quat q1, double s);
	Quat mul_scalar(double s, Quat q1);
	Quat div_scalar(Quat q1, double s);
	Quat div_scalar(double s, Quat q1);
	Quat conj(Quat q1);
	double norm(Quat q1);
	Quat normalize(Quat q1);
	Quat inv(Quat q1);
	Quat pow_scalar(Quat q, double r);
	Quat exp_quat(Quat q);
	Quat log_e(Quat q);
};

////////////////////////////////////////////////////////////

class Diff {
public:
	Diff();
	~Diff();
	Quat diff(Quat q_t, double dt);
	void reset();
private:
	Quaternion quat;
	Quat q_t_1 = quat.zeros();

};

////////////////////////////////////////////////////////////

class Integrate {
public:
	Integrate();
	~Integrate();
	Quat integrate(Quat q_t, double dt);
	void reset();
private:
	Quaternion quat;
	Quat q_t_p_1 = quat.zeros();

};

#endif