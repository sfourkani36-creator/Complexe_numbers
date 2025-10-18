#pragma once
#include <iostream>
#include<math.h>
using namespace std;
class Complex
{
	private	:
		float r;
		float i;
    public :
		Complex();
		Complex(float , float);
		Complex operator+(const Complex&) const;
		Complex operator-(const Complex&) const;
		Complex operator*(const Complex&) const;
		Complex operator/(const Complex&) const;
		bool operator<(const Complex&) const;
		bool operator>(const Complex&) const;
		Complex operator*(float ) const;
		Complex operator-(float ) const;
		Complex operator+(float) const;
		Complex operator/(float) const;
		bool operator>(float) const;
		bool operator<(float) const;
		bool operator==(const Complex&)const;
        bool operator==(float )const;
		void display() const;
		void polar() const;
		Complex conjugate() const;
		float modulus() const;
		void trigoneometric() const;
};
void equationsolver(float, float, float);//j'ai declare la fonction ici pour faciliter son utilisation dans le main pour ne pas avoir creer un autre variable 
//pas des pointeurs ou d'allocation dynamique du memoire pour les attribus de la classe donc les methodes suivant ne sont pas nécessaires ou obligatoire a implementer (default ones are okay) : 
// 	Complex(const Complex&);
// 	Complex& operator=(const Complex&);
// 	~Complex();
		
