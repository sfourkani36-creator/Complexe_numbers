#include "Complex.h"

Complex::Complex()
{
	this->r = 0;
	this->i = 0;
}

Complex::Complex(float r, float i)
{ 
	this->r = r;
	this->i = i;
}
Complex Complex::operator+(const Complex& c) const
{
	return Complex(this->r + c.r, this->i + c.i);
}
Complex Complex::operator-(const Complex& c) const
{
	return Complex(this->r - c.r, this->i - c.i);
}
Complex Complex::operator*(const Complex& c) const
{
	return Complex(this->r * c.r - this->i * c.i, this->r * c.i + this->i * c.r);
}
Complex Complex::operator/(const Complex& c) const
{
	if(c.i== 0 && c.r == 0){
		cout<<"Division by zero complex number"<<endl;
		return Complex(0, 0);
	}
	float denom = c.r * c.r + c.i* c.i;
	return Complex((this->r * c.r + this->i * c.i) / denom,(this->i * c.r - this->r * c.i) / denom);
}

bool Complex::operator<(const Complex& z) const
{
	if(this->i==0 && z.i==0 ){
		if (this->r < z.r)
			return true;
		return false;
	}
	else {
		cout << "La comparaison n'est pas defini pour les complexe" << endl;
		return false;
	}
}

bool Complex::operator>(const Complex& z) const
{
	if (this->i == 0 && z.i == 0) {
		if (this->r > z.r)
			return true;
		return false;
	}
	else {
		cout << "La comparaison n'est pas defini pour les complexe" << endl;
		return false;
	}
}

Complex Complex::operator*(float x) const
{
	return Complex(this->r* x,this->i*x);
}

Complex Complex::operator-(float x) const
{
	return Complex(this->r-x,this->i);
}

Complex Complex::operator+(float x) const
{
	return Complex(this->r +x, this->i);
}

Complex Complex::operator/(float x) const
{    if(x!=0)
	return Complex(this->r/x,this->i/x);
     else {
		cout<<"Division par zero est une crime contre le math "<<endl;
		return Complex(0,0);
}
}

bool Complex::operator>(float x) const
{ 
	if(this->i==0){
		if(this->r>x)
			return true;
		return false;
	}
	else {
		cout<<"La comparaison n'est pas defini entre un complexe et un nombre"<<endl;
		return false;
	}
}

bool Complex::operator<(float x) const
{
	if (this->i == 0) {
		if (this->r < x)
			return true;
		return false;
	}
	else {
		cout << "La comparaison n'est pas defini entre un complexe et un nombre" << endl;
		return false;
	}
}

bool Complex::operator==(const Complex& z)
{
	if (this->r == z.r && this->i == z.i)
		return true;
	return false;
}

void Complex::display() const
{
	if (this->i >= 0)
		cout << this->r << " + " << this->i << "i" << endl;
	else
		cout << this->r << " - " << -this->i << "i" << endl;
}

void Complex::polar() const
{
	float module = this->module();
	float angle = atan2(this->i, this->r);
	cout << "forme polaire (exponentielle) : "<<module << "e^(i" << angle << ")" << endl;
	
}

Complex Complex::conjugate() const
{
	return Complex(this->r,-this->i);
}

float Complex::module() const
{
	return sqrt(this->r * this->r + this->i * this->i);
}

void Complex::trigoneometric() const
{
	float module = this->module();
	float angle = atan2(this->i, this->r);
	cout <<"forme trigonometrique : "<< module << "(cos(" << angle << ") + i sin(" << angle << "))" << endl;
}

void equationsolver(float a, float b, float c)
{
	float delta = b * b - 4 * a * c;
	if (delta > 0) {
		float x1 = (-b + sqrt(delta)) / (2 * a);
		float x2 = (-b - sqrt(delta)) / (2 * a);
		cout << "Les solutions reelles sont: x1 = " << x1 << ", x2 = " << x2 << endl;
	}
	else if (delta == 0) {
		float x = -b / (2 * a);
		cout << "La solution reelle double est: x = " << x << endl;
	}
	else {
		float r = -b / (2 * a);
		float i = sqrt(-delta) / (2 * a);
		Complex x1(r, i);
		Complex x2(r, -i);
		cout << "Les solutions complexes sont: x1 = ";
		x1.display();
		cout << "\t \t \t      x2 = ";
		x2.display();
	}
}
	bool Complex::operator==(float x)const
{
   if(this->i!=0)
   {
    cout<<"comparaison n'est pas valid"<<endl;
    return false;
   }
   else if (this->i==0 && this->r==x)
	return true;
   return false;
}

