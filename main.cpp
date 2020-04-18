#include "Complex.h"
#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	bool f;
	Complex u;
    Complex z(2.3, 7.7);
	Complex v(z);
	cout << "ѕроверим работу конструкторов по умолчанию и инициализатора:" << endl << "u=" << u << endl << "z=" << z<<endl;
	cout << "ѕроверим работу конструктора копировани€:" << endl << "v=" << v << endl;
	cout << "ѕолучим значение v= " << v.Getcomplex() << endl;
	z.SetComplex(3, 7);
	cout << "ѕолучим новое значение z= " << z.Getcomplex() << endl;
	u = z;
	cout << "ѕроверим работу оператора присваивани€:" << endl << "u=" << u << endl;
	u = z + v;
	cout << "ѕроверим работу оператора сложени€:" << endl << "u=" << u << endl;
	u = z - v;
	cout << "ѕроверим работу оператора вычитани€:" << endl << "u=" << u << endl;
	u = z * v;
	cout << "ѕроверим работу оператора произведени€:" << endl << "u=" << u << endl;
	u = z / v;
	cout << "ѕроверим работу оператора частного:" << endl << "u=" << u << endl;
	f = (u == z);
	cout << "ѕроверим работу оператора равенства:" << endl << "f=" << f << endl;
}