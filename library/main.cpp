#include <iostream>
#include "Quaternion.h"
#include "P.h"

using namespace std;

P_controller p_ctrl;

int main() {

	p_ctrl.init(2);

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

	return 0;
}