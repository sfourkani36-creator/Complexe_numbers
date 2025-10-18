#include <iostream>
#include "Complex.h"

int main()
{
	equationsolver(1, 1, 1);
	Complex* z1 = new Complex[2];
	z1[0] = Complex(3, 4);
	z1[1] = Complex(1, -2);
	Complex z2(2, 3);	
	Complex z3 = z1[0] + z2;
	z3.display();
	z1[0].polar();
	z1[1].trigoneometric();
	delete[] z1;
	cout<<(z3 == z2)<<endl;
	cout<<(z3 > z2)endl;
	cout<<(z3 > z2)<<endl;
	cout<<(z3 < 3)<<endl;
	cout<<(z2 > -5)<<endl;
	cout<<(z2==8)<<endl;
	Complex z4 = z3 * z2;
	z4.display();
	Complex z5 = z2 * 2;
	z5.display();
	z5 = z4 - 1;
	z5.display();
	z5 = z4 / 2;
	z5.display();
	z5 = z2 / z3;
	z5.display();
	z5 = z5 + 1;
	z5.display();
	cout <<"le module de z5 est :" << z5.modulus() << endl;
}

