#include "Tor.hpp"

Tor::Tor()
{
	r = 0;
	R = 0;
}

Tor::Tor(double a, double b)
{
	r = a;
	R = b;
}

double Tor::volume()
{
	return 2 * 3.14 * 3.14 * r * r * R;
}

Tor& Tor::operator=(const Tor& A)
{
	r = A.r;
	R = A.R;
	return *this;
}

bool operator<(Tor A, Tor B)
{
	return  A.volume() < B.volume();
}

bool operator>(Tor A, Tor B)
{
	return  A.volume() > B.volume();
}

bool operator==(Tor A, Tor B)
{
	if (A.volume() == B.volume())
		return true;
	else
		return false;
}

ostream& operator<<(ostream& out, Tor A)
{
	out << "r: " << A.r << " " << "R: " << A.R << " " << "Volume: " << A.volume() << endl;

	return out;
	
}