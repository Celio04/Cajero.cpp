//Programa: Cajero Automatico                         
//Autor: Celio Andres Gonzalez Campuzano
//fecha: 12-10-2023                                   
//archivo: cajeroautomatico.cpp

#include<iostream>                                    
using namespace std;

int main ()
{
        int c1,c2,c3,c01=20,c02=20,c03=40;                    
        float valor,saldodisponible=10.000;
        cout<<"Ingrese c1 c2 c3 :"; cin>>c1>>c2>>c3;
        if(c1==c01){
                if(c2==c02){
                        if(c3==c03){                                                                                        
                                
                cout<<"ingrese el valor a retirar :";cin>>valor;

saldodisponible = saldodisponible-valor;
                  }else{
                cout<<"Contraseña c3 invalida"<<endl;
                        }                             
                }else{
cout<<"Contraseña c2 invalida"<<endl;                                                               }                                             }else{
cout<<"Contraseña c1 invalida"<<endl; }
                                                      
return (0);
}
