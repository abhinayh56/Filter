#ifndef VECTOR_3D
#define VECTOR_3D

#include <math.h>
#include "Vect_3D.h"

class Vector_3D {
public:
	Vector_3D();
	double get_x(Vect_3D v1);
	double get_y(Vect_3D v1);
	double get_z(Vect_3D v1);
	Vect_3D zeros();
	Vect_3D ones();
	Vect_3D basis_x();
	Vect_3D basis_y();
	Vect_3D basis_z();
	Vect_3D unit_x();
	Vect_3D unit_y();
	Vect_3D unit_z();
	Vect_3D add(Vect_3D v1, Vect_3D v2);
	Vect_3D sub(Vect_3D v1, Vect_3D v2);
	double dot(Vect_3D v1, Vect_3D v2);
	Vect_3D cross(Vect_3D v1, Vect_3D v2);
	Vect_3D mul_scalar(Vect_3D v1, double s);
	Vect_3D mul_scalar(double s, Vect_3D v1);
	Vect_3D div_scalar(Vect_3D v1, double s);
	Vect_3D div_scalar(double s, Vect_3D v1);
	Vect_3D normalize(Vect_3D v1);
	double norm(Vect_3D v1);
	double tripple_prod_scalar(Vect_3D v1, Vect_3D v2, Vect_3D v3);
	Vect_3D tripple_prod_vector(Vect_3D v1, Vect_3D v2, Vect_3D v3);
};

#endif