#include "PI.h"

PI_controller::PI_controller() {
	dt = 0.0;
	Kp = 0.0;
	Ki = 0.0;
	u_k_1 = 0.0;
	e_k_1 = 0.0;
	start = true;
}

void PI_controller::init(double dt_, double Kp_, double Ki_, double u_k_1_, double I_max_) {
	dt = dt_;
	Kp = Kp_;
	Ki = Ki_;
	u_k_1 = u_k_1_;
	I_max = I_max_;
}

void PI_controller::set_param(double dt_, double Kp_, double Ki_, double u_k_1_, double I_max_) {
	dt = dt_;
	Kp = Kp_;
	Ki = Ki_;
	u_k_1 = u_k_1_;
	I_max = I_max_;
}

void PI_controller::set_dt(double dt_) {
	dt = dt_;
}

void PI_controller::set_Kp(double Kp_) {
	Kp = Kp_;
}

void PI_controller::set_Ki(double Ki_) {
	Ki = Ki_;
}

void PI_controller::set_u_0(double u_k_1_) {
	u_k_1 = u_k_1_;
}

void PI_controller::set_I_max(double I_max_) {
	I_max = I_max_;
}

double PI_controller::get_dt() {
	return dt;
}

double PI_controller::get_Kp() {
	return Kp;
}

double PI_controller::get_Ki() {
	return Ki;
}

double PI_controller::get_u_k_1() {
	return u_k_1;
}

double PI_controller::get_I_max() {
	return I_max;
}

double PI_controller::calc_u(double e_k) {
	double u_k = 0.0;
	if(start==true){
		start = false;
		u_k = u_k_1 + Kp * e_k;
	}
	else{
		u_k = u_k_1 + (Kp + Ki * dt) * e_k - Kp*e_k_1;
	}
	u_k = math_fun.saturate(u_k, -I_max, I_max);
	u_k_1 = u_k;
	e_k_1 = e_k;
	return u_k;
}

void PI_controller::reset() {
	u_k_1 = 0.0;
	e_k_1 = 0.0;
	start = false;
}

void PI_controller::merge(double u_k_1_) {
	u_k_1 = u_k_1_;
}