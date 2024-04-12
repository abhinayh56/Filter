#include "Vector3D.h"

Vector_3D::Vector_3D() {
}

double Vector_3D::get_x(Vect_3D v1) {
	return v1.x;
}

double Vector_3D::get_y(Vect_3D v1) {
	return v1.y;
}

double Vector_3D::get_z(Vect_3D v1) {
	return v1.z;
}

Vect_3D Vector_3D::zeros() {
	Vect_3D v1(0, 0, 0);
	return v1;
}

Vect_3D Vector_3D::ones() {
	Vect_3D v1(1, 1, 1);
	return v1;
}

Vect_3D Vector_3D::basis_x() {
	Vect_3D v1(1, 0, 0);
	return v1;
}

Vect_3D Vector_3D::basis_y() {
	Vect_3D v1(0, 1, 0);
	return v1;
}

Vect_3D Vector_3D::basis_z() {
	Vect_3D v1(0, 0, 1);
	return v1;
}

Vect_3D Vector_3D::unit_x() {
	Vect_3D v1(1, 0, 0);
	return v1;
}

Vect_3D Vector_3D::unit_y() {
	Vect_3D v1(0, 1, 0);
	return v1;
}

Vect_3D Vector_3D::unit_z() {
	Vect_3D v1(0, 0, 1);
	return v1;
}

Vect_3D Vector_3D::add(Vect_3D v1, Vect_3D v2) {
	Vect_3D v3(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
	return v3;
}

Vect_3D Vector_3D::sub(Vect_3D v1, Vect_3D v2) {
	Vect_3D v3(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
	return v3;
}

double Vector_3D::dot(Vect_3D v1, Vect_3D v2) {
	return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

Vect_3D Vector_3D::cross(Vect_3D v1, Vect_3D v2) {
	Vect_3D v3;
	v3.x = v1.y * v2.z - v1.z * v2.y;
	v3.y = v1.z * v2.x - v1.x * v2.z;
	v3.z = v1.x * v2.y - v1.y * v2.x;
	return v3;
}

Vect_3D Vector_3D::mul_scalar(Vect_3D v1, double s) {
	Vect_3D v3(v1.x * s, v1.y * s, v1.z * s);
	return v3;
}

Vect_3D Vector_3D::mul_scalar(double s, Vect_3D v1) {
	Vect_3D v3(v1.x * s, v1.y * s, v1.z * s);
	return v3;
}

Vect_3D Vector_3D::div_scalar(Vect_3D v1, double s) {
	Vect_3D v3(v1.x / s, v1.y / s, v1.z / s);
	return v3;
}

Vect_3D Vector_3D::div_scalar(double s, Vect_3D v1) {
	Vect_3D v3(v1.x / s, v1.y / s, v1.z / s);
	return v3;
}

Vect_3D Vector_3D::normalize(Vect_3D v1) {
	double l = sqrt(v1.x * v1.x + v1.y * v1.y + v1.z * v1.z);
	Vect_3D v3(v1.x / l, v1.y / l, v1.z / l);
	return v3;
}

double Vector_3D::Vector_3D::norm(Vect_3D v1) {
	return sqrt(v1.x * v1.x + v1.y * v1.y + v1.z * v1.z);
}

double Vector_3D::tripple_prod_scalar(Vect_3D v1, Vect_3D v2, Vect_3D v3) {
	return dot(v1, cross(v2, v3));
}

Vect_3D Vector_3D::tripple_prod_vector(Vect_3D v1, Vect_3D v2, Vect_3D v3) {
	//return sub(mul_scalar(dot(v1, v3),v2), mul_scalar(dot(v1, v2), v3));
	return cross(v1, cross(v2, v3));
}