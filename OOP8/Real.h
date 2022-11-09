#pragma once
#include<iostream>
#include<string>
#include "Number.h"
using namespace std;
class Real : public Number
{
public:
	Real();
	Real(float);

	/*operator string();*/
	friend ostream& operator << (ostream&, Real&);
	friend istream& operator >> (istream&, Real&);
	Real exponentiation(int);
	Real log();
};

