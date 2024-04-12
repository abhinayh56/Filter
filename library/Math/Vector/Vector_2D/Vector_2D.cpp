#include "Vector_2D.h"

Vector_2D::Vector_2D() {
}

double Vector_2D::get_x(Vect_2D v1) {
	return v1.x;
}

double Vector_2D::get_y(Vect_2D v1) {
	return v1.y;
}

Vect_2D Vector_2D::zeros() {
	Vect_2D v1(0, 0);
	return v1;
}

Vect_2D Vector_2D::ones() {
	Vect_2D v1(1, 1);
	return v1;
}

Vect_2D Vector_2D::basis_x() {
	Vect_2D v1(1, 0);
	return v1;
}

Vect_2D Vector_2D::basis_y() {
	Vect_2D v1(0, 1);
	return v1;
}

Vect_2D Vector_2D::unit_x() {
	Vect_2D v1(1, 0);
	return v1;
}

Vect_2D Vector_2D::unit_y() {
	Vect_2D v1(0, 1);
	return v1;
}


Vect_2D Vector_2D::add(Vect_2D v1, Vect_2D v2) {
	Vect_2D v3(v1.x + v2.x, v1.y + v2.y);
	return v3;
}

Vect_2D Vector_2D::sub(Vect_2D v1, Vect_2D v2) {
	Vect_2D v3(v1.x - v2.x, v1.y - v2.y);
	return v3;
}

double Vector_2D::dot(Vect_2D v1, Vect_2D v2) {
	return v1.x * v2.x + v1.y * v2.y;
}

Vect_3D Vector_2D::cross(Vect_2D v1, Vect_2D v2) {
	Vect_3D v3;
	v3.x = 0;
	v3.y = 0;
	v3.z = v1.x * v2.y - v1.y * v2.x;
	return v3;
}

Vect_2D Vector_2D::mul_scalar(Vect_2D v1, double s) {
	Vect_2D v3(v1.x * s, v1.y * s);
	return v3;
}

Vect_2D Vector_2D::mul_scalar(double s, Vect_2D v1) {
	Vect_2D v3(v1.x * s, v1.y * s);
	return v3;
}

Vect_2D Vector_2D::div_scalar(Vect_2D v1, double s) {
	Vect_2D v3(v1.x / s, v1.y / s);
	return v3;
}

Vect_2D Vector_2D::div_scalar(double s, Vect_2D v1) {
	Vect_2D v3(v1.x / s, v1.y / s);
	return v3;
}

Vect_2D Vector_2D::normalize(Vect_2D v1) {
	double l = sqrt(v1.x * v1.x + v1.y * v1.y);
	Vect_2D v3(v1.x / l, v1.y / l);
	return v3;
}

double Vector_2D::Vector_2D::norm(Vect_2D v1) {
	return sqrt(v1.x * v1.x + v1.y * v1.y);
}

double Vector_2D::tripple_prod_scalar(Vect_2D v1, Vect_2D v2, Vect_2D v3) {
	return 0;
}

Vect_2D Vector_2D::tripple_prod_vector(Vect_2D v1, Vect_2D v2, Vect_2D v3) {
	return sub(mul_scalar(dot(v1, v3), v2), mul_scalar(dot(v1, v2), v3));
}