#include <iostream>
#include <ctime>
#include <string>

using namespace std;

void mostrar(float** vector,int f,int c);
void eliminar(float** vector,int fila,int c);
void ordenar(float** vector,int fila,int c);
void insertar(float** vector,int fila,int c);

void mostrar(float** vector,int f,int c){
    cout<<"Lista:"<<endl;
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cout<<vector[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void eliminar(float** vector,int f,int c){
    int fila,columna;
    cout<<"Que posicion quiere eliminar: "<<endl;
    cout<<"Fila: ";
    cin>>fila;
    cout<<"Columna: ";
    cin>>columna;
    vector[fila-1][columna-1]=0;
    mostrar(vector,f,c);
}

void ordenar(float** vector,int f,int c){
    srand(time(NULL));
    for(int i=0;i<f;i++){
        for(int j=0;j<c-1;j++){
            int aux=0;
            for(int h=0;h<c-1;h++){
                if(vector[i][h]>vector[i][h+1]){
                    aux=vector[i][h+1];
                    vector[i][h]=vector[i][h+1];
                    vector[i][h+1]=aux;
                }
            }
        }
    }
}

void insertar(float** vector,int f,int c){
    srand(time(NULL));
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            vector[i][j]=1+rand()%10;
        }
    }
}

int main(){
    int f,c;
    cout<<"Ingrese cuantas filas quiere: "<<endl;
    cin>>f;
    cout<<"Ingrese cuantas colummnas quiere: "<<endl;
    cin>>c;
    for(int k=0;k<10000;k++){
        float** vector=new float*[f];
        for(int i=0;i<f;i++){
            vector[i]=new float[c];
        }
        insertar(vector,f,c);
        ordenar(vector,f,c);
        mostrar(vector,f,c);
        eliminar(vector,f,c);
        
        for(int i=0;i<c;i++){
            delete[] vector[i];
        }
        delete[] vector;
    }
}