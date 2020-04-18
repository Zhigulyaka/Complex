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
	Complex(); //����������� �� ���������
	Complex(double real, double image);//�����������-�������������
	Complex(const Complex& other); //����������� �����������
	void SetComplex(double real, double image);
	Complex Getcomplex();
	Complex& operator = (const Complex& other);//���������� ������������
	friend Complex operator + (const Complex& a, const Complex& b);//���������� ��������
	friend Complex operator - (const Complex& a, const Complex& b);//���������� ���������
	friend Complex operator * (const Complex& a, const Complex& b);//���������� ���������
	friend Complex operator / (const Complex& a, const Complex& b);//���������� ��������
	friend bool operator==(const Complex& a, const Complex& b);//���������� ���������
	friend ostream& operator<<(ostream& vyvod, const Complex& other);//���������� ������
	friend istream& operator>>(istream& vvod, Complex& other);//���������� �����

};
#endif // !_Complex_h_