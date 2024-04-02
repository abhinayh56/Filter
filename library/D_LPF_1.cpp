#include "D_LPF_1.h"

D_LPF_1_controller::D_LPF_1_controller() {
	dt = 0.0;
	e_k_1 = 0.0;
	Kd = 0.0;
	start = true;
}

void D_LPF_1_controller::init(double dt_, double Kd_) {
	dt = dt_;
	Kd = Kd_;
}

void D_LPF_1_controller::set_param(double dt_, double Kd_) {
	dt = dt_;
	Kd = Kd_;
}

void D_LPF_1_controller::set_dt(double dt_) {
	dt = dt_;
}

void D_LPF_1_controller::set_Kd(double Kd_) {
	Kd = Kd_;
}

double D_LPF_1_controller::get_dt() {
	return dt;
}

double D_LPF_1_controller::get_Kd() {
	return Kd;
}

double D_LPF_1_controller::get_e_k_1() {
	return e_k_1;
}

double D_LPF_1_controller::calc_u(double e_k) {
	double u_k = 0.0;
	if (start == true) {
		start = false;
		u_k = 0.0;
	}
	else {
		u_k = (tau * u_k_1 + Kd * (e_k - e_k_1)) / (tau + dt);
	}
	e_k_1 = e_k;
	u_k_1 = u_k;
	return u_k;
}

void D_LPF_1_controller::reset() {
	e_k_1 = 0.0;
	start = true;
}

void D_LPF_1_controller::merge(double u_k_1_) {
}