#include <iostream>
#include"Number.h";
#include"Real.h";
using namespace std;

void test(Number n) {
    cout << n << endl;
}

int main()
{
    Number a(12);
    cout << a << endl;
    Real r(2);
    cin >> a;
    cout << (string)r << endl;
    cout << r << endl;
    Number c = a.add(r);
    cout << c << endl;
    c = r.divide(a);
    cout << c << endl;
    c = r.exponentiation(3);
    cout << c << endl;
    c = r.log();
    cout << c << endl;
    test(a);
    test(r);
}

