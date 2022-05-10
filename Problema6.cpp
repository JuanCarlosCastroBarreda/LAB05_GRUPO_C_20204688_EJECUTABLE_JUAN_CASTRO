#include <iostream>
#include <stdio.h>
#include <ctime>
#include <string>

using namespace std;
int suma(int x,int y){
    return x+y;
}
int resta(int x,int y){
    return x-y;
}
int multiplicar(int x,int y){
    return x*y;
}
int dividir(int x,int y){
    if(y==0){
        cout<<"Indeterminado"<<endl;
        return -1;
    }
    return x/y;
}
void numero(int& numero){
    do{
        cout<<"Ingrese un numero: "<<endl;
        cin>>numero;
    }while(numero<=0);
}
int main(){
    int(*op)(int,int);
    int n1=0;
    int n2=0;
    numero(n1);
    numero(n2);
    int opcion=-1;
    do{
        cout<<"1 suma "<<endl;
        cout<<"2 resta"<<endl;
        cout<<"3 multiplicar"<<endl;
        cout<<"4 dividir"<<endl;
        cout<<"5 SALIR"<<endl;
        cin>>opcion;
        switch(opcion){
            case 1:{
                cout<<"RESULTADO: ";
                op=suma;
                break;
            }
            case 2:{
                cout<<"RESULTADO: ";
                op=resta;
                break;
            }
            case 3:{
                cout<<"RESULTADO: ";
                op=multiplicar;
                break;
            }
            case 4:{
                cout<<"RESULTADO: ";
                op=dividir;
                break;
            }
            case 5:{
                break;
            }
            default:
                cout<<"Ingrese un numero de los que se muestra"<<endl;
                break;
        }
        if(opcion>=1 && opcion<=5){
            cout<<op(n1,n2)<<endl;
        }
    }while(opcion!=0);
}