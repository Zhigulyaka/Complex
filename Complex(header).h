#pragma once
#include <iostream>
#include <string>
#include <complex>
using namespace std;
#ifndef _Complex_h_
#define _Complex_h_
class Complex
{
private:
	double Re;
	double Im;
public:
	Complex(); //конструктор по умолчанию
	Complex(double real, double image);//конструктор-инициализатор
	Complex(const Complex& other); //конструктор копирования
	void SetComplex(double real, double image);
	Complex Getcomplex();
	Complex& operator = (const Complex& other);//перегрузка присваивания
	friend Complex operator + (const Complex& a, const Complex& b);//перегрузка сложения
	friend Complex operator - (const Complex& a, const Complex& b);//перегрузка вычитания
	friend Complex operator * (const Complex& a, const Complex& b);//перегрузка умножения
	friend Complex operator / (const Complex& a, const Complex& b);//перегрузка частного
	friend bool operator==(const Complex& a, const Complex& b);//перегрузка равенства
	friend ostream& operator<<(ostream& vyvod, const Complex& other);//перегрузка вывода
	friend istream& operator>>(istream& vvod, Complex& other);//перегрузка ввода

};
#endif // !_Complex_h_