#include<iostream>
#include<string>
#include "Number.h"
using namespace std;

Number::Number() {
	value = 0;
}
Number::Number(float value) {
	this->value = value;
}
void Number::setValue(float value) {
	this->value = value;
}
float Number::getValue() {
	return value;
}
Number Number::add(Number number) {
	Number res(this->value + number.value);
	return res;
}
Number Number::divide(Number number) {
	if (number.value == 0) {
		cout << " incorrect value: can not divide by 0";
	}
	Number res(this->value / number.value);
	return res;
}
Number::operator string() {
	return to_string(value);
}
ostream& operator<<(ostream& out, Number& number) {
	out << number.value << endl;
	return out;
}
istream& operator>>(istream& in, Number& number) {
	cout << "Input value: "; in >> number.value;
	return in;
}
