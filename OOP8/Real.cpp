#include "Real.h"
#include<cmath>

Real::Real()
{
	this->value = 0;
}

Real::Real(float value) {
	this->value=value;
}

//Real::operator string()
//{
//	return to_string(this->value);
//}

Real Real::exponentiation(int power)
{
	return pow(value, power);
}

Real Real::log()
{
	return logf(value);
}

ostream& operator<<(ostream& out, Real& real)
{
	out << real.value << endl;
	return out;
}

istream& operator>>(istream& in, Real& real)
{
	cout << "Input value: "; in >> real.value;
	return in;
}
