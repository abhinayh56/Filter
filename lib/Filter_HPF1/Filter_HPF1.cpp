#include "Filter_HPF1.h"

HPF1_filter::HPF1_filter(){
	start = true;
}

void HPF1_filter::set_param(float fc_, float dt_){
	fc = fc_;
	dt = dt_;

	tau = 1.0 / (2.0*math_pi*fc);
	alpha = tau / (dt + tau);
}

void HPF1_filter::get_param(float* fc_, float* dt_){
	*fc_ = fc;
	*dt_ = dt;
}

void HPF1_filter::set_fc(float fc_){
	fc = fc_;

	tau = 1.0 / (2.0*math_pi*fc);
	alpha = tau / (dt + tau);
}

void HPF1_filter::set_tau(float tau_){
	tau = tau_;

	fc = 1.0 / (2.0*math_pi*tau);
	alpha = tau / (dt + tau);
}

void HPF1_filter::set_dt(float dt_){
	dt = dt_;

	alpha = tau / (dt + tau);
}

void HPF1_filter::set_alpha(float alpha_){
	alpha = alpha_;

	tau = (alpha/(1.0 - alpha)) * dt;
	fc = 1.0 / (2.0*math_pi*tau);
}

float HPF1_filter::get_fc(){
	return fc;
}

float HPF1_filter::get_tau(){
	return tau;
}

float HPF1_filter::get_dt(){
	return dt;
}

float HPF1_filter::get_alpha(){
	return alpha;
}

float HPF1_filter::get_y(){
	return y_i;
}

float HPF1_filter::update(float x_i){
	if(start==true){
		start = false;
		y_i = x_i;
	}
	else{
		y_i = alpha*(y_i_1 + x_i - x_i_1);
	}
	x_i_1 = x_i;
	y_i_1 = y_i;

	return y_i;
}

void HPF1_filter::reset(){
	x_i_1 = 0.0;
	y_i_1 = 0.0;
	y_i = 0.0;
	start = true;
}