#include <iostream>
#include "Quaternion.h"
#include "data_type_geometry.h"

using namespace std;

void disp(Axis_ang aa) {
	std::cout << "(" << aa.v.x << ", " << aa.v.y << ", " << aa.v.z << "), " << aa.th;
}

int main() {

	Quat q1(1.315,14.81,49.2,61.5);
	Quat q2(2, 6, 4, 7);
	cout << "q1 = " << q1.q0 << ", " << q1.q1 << ", " << q1.q2 << ", " << q1.q3 << endl;

	Quaternion quat;

	q2 = quat.log_e(q1);
	cout << "q2 = " << q2.q0 << ", " << q2.q1 << ", " << q2.q2 << ", " << q2.q3 << endl;

	q2 = quat.exp_quat(q2);
	cout << "q2 = " << q2.q0 << ", " << q2.q1 << ", " << q2.q2 << ", " << q2.q3 << endl;

	q2 = quat.exp_quat(quat.log_e(q1));
	cout << "q2 = " << q2.q0 << ", " << q2.q1 << ", " << q2.q2 << ", " << q2.q3 << endl;

	Quat aaa;

	Axis_ang aa;
	aa.th = 15.47;
	Vect_3D vvv(1, 78.3, 445.1150);
	aa.v.x = 15;
	disp(aa);

	return 0;
}