#pragma once
#include <iostream>
using namespace std;

class Tor
{
private:
	double r; //������ ���������� ����������
	double R; //������ ���������� ��������

public:
	Tor();
	Tor(double a, double b);
	double volume();

	friend bool operator <(Tor A, Tor B);
	friend bool operator >(Tor A, Tor B);
	friend bool operator ==(Tor A, Tor B);
	Tor& operator =(const Tor& A);
	friend ostream& operator <<(ostream& out, Tor A);
	
};
