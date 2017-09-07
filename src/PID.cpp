#include "PID.h"
#include <iostream>

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
	/*
	* Errors
	*/
	p_error = i_error = d_error = 0;

	/*
	* Coefficients
	*/
	PID::Kp = Kp;
	PID::Ki = Ki;
	PID::Kd = Kd;

	cout << "Init done "  << endl;

}

void PID::UpdateError(double cte) {
	d_error = cte - p_error;
	p_error = cte;
	i_error += cte;
}

double PID::TotalError() {
	cout << "p_error:"  << p_error << " i_error:"  << i_error << " d_error:"  << d_error << endl;
	return	-((Kp * p_error)+(Ki * i_error)+(Kd * d_error));
}

