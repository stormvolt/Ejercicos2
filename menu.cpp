#include<iostream>
#include "myLib.h"
using namespace std;

int main()
{
	int f=1;
	while(f==1)
	{
		int a;
		int b;	
		cout << "Ingrese un numero: ";
		cin >> a;
		cout << "Seleccione 0 para elevar al cubo, 1 para elevar al cuadrado, o 2 para ejecutar la funcion de fibonacci: ";
		cin >> b;
		if(b==0)
		{
			cout << cube(a) << "\n";
		}
		if(b==1)
		{
			cout << square(a) << "\n";
		}
		if(b==2)
		{
			cout << fibonacci(a) << "\n";
		}
		cout << "Desea continuar? y(1)/n(0) ";
		cin >> f;
	}
return 1;
}


int cube(int x)
{
	int c=x*x*x;
	return c;
}

int square(int x)
{
	int c=x*x;
	return c;
}

int fibonacci (int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return fibonacci(n-2) + fibonacci(n-1);
	}
}
