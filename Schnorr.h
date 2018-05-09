#include "global.h"

Schnorr_sign::Schnorr_sign(const int &n1, const int &n2)
{
    euclid(n1, n2);
}



void Schnorr_sign::euclid(const int &n1, const int &n2)
{
	//temporary used variables
	 //d - remainder after division, q - quotient,  5 - arbitrarily chosen value for circle	
    int q, d = 5;
	int r_1 = 0, r_2 = 1, r; //r_1 means r of i-1 iteration
	int s_1 = 1, s_2 = 0, s;
	int a = n1, b = n2;
	while (d > 0)
	{
		q = a / b;
		d = a % b;
		r = r_2 - r_1*q;
		s = s_2 - s_1*q;

		a = b;
		b = d;
		r_2 = r_1;
		r_1 = r;
		s_2 = s_1;
		s_1 = s;
	}

	std::cout << "r: " << r_2 << "      s: " << s_2 << std::endl;
}
