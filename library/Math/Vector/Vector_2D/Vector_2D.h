#ifndef VECTOR_2D
#define VECTOR_2D

#include <math.h>
#include "Vect_2D.h"

class Vector_2D {
public:
	Vector_2D();
	double get_x(Vect_2D v1);
	double get_y(Vect_2D v1);
	Vect_2D zeros();
	Vect_2D ones();
	Vect_2D basis_x();
	Vect_2D basis_y();
	Vect_2D unit_x();
	Vect_2D unit_y();
	Vect_2D add(Vect_2D v1, Vect_2D v2);
	Vect_2D sub(Vect_2D v1, Vect_2D v2);
	double dot(Vect_2D v1, Vect_2D v2);
	Vect_3D cross(Vect_2D v1, Vect_2D v2);
	Vect_2D mul_scalar(Vect_2D v1, double s);
	Vect_2D mul_scalar(double s, Vect_2D v1);
	Vect_2D div_scalar(Vect_2D v1, double s);
	Vect_2D div_scalar(double s, Vect_2D v1);
	Vect_2D normalize(Vect_2D v1);
	double norm(Vect_2D v1);
	double tripple_prod_scalar(Vect_2D v1, Vect_2D v2, Vect_2D v3);
	Vect_2D tripple_prod_vector(Vect_2D v1, Vect_2D v2, Vect_2D v3);
};

#endif