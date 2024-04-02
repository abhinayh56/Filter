#ifndef I_CONTROLLER
#define I_CONTROLLER

class I_controller {
public:
	I_controller();
	void init(double dt_, double Ki_, double u_k_1_);
	void set_param(double dt_, double Ki_, double u_k_1_);
	void set_dt(double dt_);
	void set_Ki(double Ki_);
	void set_u_0(double u_k_1_);
	double get_dt();
	double get_Ki();
	double get_u_k_1();
	double calc_u(double e_k);
	void reset();
	void merge(double u_k_1_);

private:
	double dt = 0.0;
	double u_k_1 = 0.0;
	double Ki = 0.0;
};

#endif