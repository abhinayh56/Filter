#include "Filter_LPF2.h"

LPF2_filter::LPF2_filter(){
	start = true;
}

void LPF2_filter::set_param(float fc_, float Q_, float dt_){
	fc = fc_;
    Q = Q_;
	dt = dt_;

    wc = math_2pi*fc_;

    K0 = Q + wc*dt + Q*dt*dt*wc*wc;
    K1 = Q*dt*dt*wc*wc / K0;
    K2 = (2.0*Q + wc*dt) / K0;
    K3 = Q / K0;
}

void LPF2_filter::get_param(float* fc_, float* Q_, float* dt_){
	*fc_ = fc;
    *Q_ = Q;
	*dt_ = dt;
}

void LPF2_filter::set_fc(float fc_){
	fc = fc_;

    wc = math_2pi*fc_;

    K0 = Q + wc*dt + Q*dt*dt*wc*wc;
    K1 = Q*dt*dt*wc*wc / K0;
    K2 = (2.0*Q + wc*dt) / K0;
    K3 = Q / K0;
}

void LPF2_filter::set_Q(float Q_){
	Q = Q_;

    K0 = Q + wc*dt + Q*dt*dt*wc*wc;
    K1 = Q*dt*dt*wc*wc / K0;
    K2 = (2.0*Q + wc*dt) / K0;
    K3 = Q / K0;
}

void LPF2_filter::set_dt(float dt_){
	dt = dt_;
    
    K0 = Q + wc*dt + Q*dt*dt*wc*wc;
    K1 = Q*dt*dt*wc*wc / K0;
    K2 = (2.0*Q + wc*dt) / K0;
    K3 = Q / K0;
}

float LPF2_filter::get_fc(){
	return fc;
}

float LPF2_filter::get_Q(){
	return Q;
}

float LPF2_filter::get_dt(){
	return dt;
}

float LPF2_filter::get_y(){
	return y_i;
}

float LPF2_filter::update(float x_i){
	if(start==0){
		start = 1;
		y_i = x_i;
	}
    else if(start==1){
        start = 2;
        y_i = x_i;
    }
	else{
		y_i = K1*x_i + K2*y_i_1 + K3*y_i_2;
	}

	y_i_2 = y_i_1;
	y_i_1 = y_i;

	return y_i;
}

void LPF2_filter::reset(){
    y_i_2 = 0.0;
    y_i_1 = 0.0;
    y_i = 0.0;
    start = 0;
}