#include "Filter_SRLF.h"

Filter_SRLF::Filter_SRLF(){
    float dt = 0;
    float dx_dt_max = 0;
    float y_i_1 = 0;
    bool start = false;
}

void Filter_SRLF::set_param(float dt_, float dx_dt_max_){
    dt = dt_;
    dx_dt_max = dx_dt_max_;
}

void Filter_SRLF::set_dt(float dt_){
    dt = dt_;
}

void Filter_SRLF::set_dx_dt_max(float dx_dt_max_){
    dx_dt_max = dx_dt_max_;
}

float Filter_SRLF::get_dt(){
    return dt;
}

float Filter_SRLF::get_dx_dt_max(){
    return dx_dt_max;
}

float Filter_SRLF::get_y(){
    return y_i;
}

float Filter_SRLF::update(float x_i){
    if(start==true){
        start = false;
        y_i = x_i;
    }
    else{
        if(math_fun.mod(x_i - y_i_1) > dx_dt_max*dt){
            y_i = y_i_1 + math_fun.sign((x_i - y_i_1))*dx_dt_max*dt;
        }
        else{
            y_i = x_i;
        }
    }
    
    y_i_1 = y_i;
    
    return y_i;
}

void Filter_SRLF::reset(){
    float y_i = 0.0;
    float y_i_1 = 0;
    bool start = true;
}