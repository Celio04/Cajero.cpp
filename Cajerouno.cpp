//Programa: seguridad
//Autor: Gonzales Campuzano Celio 
//fecha de creacion: 2-10-2023



#include<iostream>
using namespace std;

int main ()
{
	int c1,c2=5;
	cout<<"Ingresamos la contraseña: "; cin>>c1;
	if (c1==c2)
	{
		cout<<"Acceso correcto";
	}else{
		cout<<"Acceso incorrecto";
	}
}
