#pragma once
#include<iostream>
using namespace std;
class Number
{
protected:
	float value;
public:
	Number();
	Number(float);
	void setValue(float);
	float getValue();

	Number add(Number);
	Number divide(Number number);

	operator string();
	friend ostream& operator << (ostream&, Number&);
	friend istream& operator >> (istream&, Number&);
};

