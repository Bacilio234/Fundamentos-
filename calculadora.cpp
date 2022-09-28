//pedrobacilio 
//modificado 28-09-2022
#include<iostream>
using namespace std;

int main()
{
	float p,b,s,m,d,r;
	//Ingreso de datos
	cout<<"Ingrese en valor de p=:";
	cin>>p;
	cout<<"Ingrese en valor de b=:";
	//Operaciones 
	cin>>b;
	s=p+b;
	m=p*b;
	d=p/b;
	r=p-b;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<p<<" + "<<b<<" = "<<s<<endl;
	cout<<"Las multiplicacion de "<<p<<" * "<<b<<" = "<<m<<endl;
	cout<<"Las division de "<<p<<" / "<<b<<" = "<<d<<endl;
	cout<<"Las resta de "<<p<<" - "<<b<<" = "<<r<<endl;
	return 0 ;

}
