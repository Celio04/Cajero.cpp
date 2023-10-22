//Programa: seguridad 3 capas                     //Autor: Gonzalez Campuzano Celio
// 5-10-2023 

#include<iostream>
using namespace std;
                                                  int main()
{
   int c11=11,c12=22,c13=33,c01,c02,c03;
   cout<<"Ingrese las contraseñás c11 c12 c13: ";
   cin>>c11>>c12>>c13;
   if(c11==c01){
   if(c12==c02){
   if(c13==c03){

	   cout<<"ACCESO CORRECTO \n";

   }else{

	   cout<<"La tercera clave fallo"<<endl;       
   }

   }else{

	   cout<<"La segunda clave fallo"<<endl;

   }

   }else{

	   cout<<"La primera clave fallo"<<endl;

   }
   return (0) ;
}
