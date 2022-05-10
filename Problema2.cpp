#include <iostream>
#include <stdio.h>
#include <ctime>
#include <string>

using namespace std;

void mostrar(float* vector,int tam);

void mostrar(float* vector,int tam){
    for(int i=0;i<tam;i++){
        cout<<vector[i]<<" ";
    }
cout<<endl;
}

int main(){
    srand(time(NULL));
    int tam;
    cout<<"Defina un tamanio para el vector: "<<endl;
    cin>>tam;
    for(int i=0;i<1000000;i++){
        float* v=new float[tam];
        float* v2= new float[tam];
        float* v3=new float [tam];
            for(int i=0;i<tam;i++){
                v[i]=1+rand()%50;
                v2[i]=1+rand()%50;
                v3[i]=(v[i]*v2[i]);
            }
            cout<<"\nLista A: "<<endl;
            mostrar(v,tam);
            cout<<"Lista B: "<<endl;
            mostrar(v2,tam);
            cout<<"\nLista producto punto [A.B]:"<<endl;
            mostrar(v3,tam);
            cout<<endl;
            delete[]v;
            delete[]v2;
            delete[]v3;
        }
    }
