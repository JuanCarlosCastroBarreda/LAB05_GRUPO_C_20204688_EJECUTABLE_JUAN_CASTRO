#include <iostream>
#include <stdio.h>
#include <ctime>
#include <string>

using namespace std;

void llenar(string* v,int l);
void mostrar(string* v,int l);
void concatenar(string*v,string*v1,string*concatenacion,int l,int l2);


void llenar(string*v, int l){
    for(int i=0;i<l;i++){
        cout<<"--------"<<endl;
        cin>>v[i];
    }
}
void mostrar(string*v,int l){
    cout<<endl;
    cout<<"Concatenar: "<<endl;
    for(int i=0;i<l;i++){
        cout<<v[i];
    }
    cout<<endl;
}
void concatenar(string*v,string*v1,string*concatenacion,int l,int l2){
    int l_total=0;
    int i, j;
    for(int i=0;i<l2;i++){
        concatenacion[i]=v1[i];
    }
    for(j=0;j<l;j++){
        concatenacion[i]=v[j];
        i++;
    }
}

int main(){
    int l,l2;
    cout<<"Cantidad del primer vector: "<<endl;
    cin>>l;
    cout<<"Cantidad del segundo vector: "<<endl;
    cin>>l2;
    string* v1=new string[l];
    string* v2=new string[l2];
    string* concatenacion=new string[l+l2];
    cout<<"Primera Cadena de Texto: "<<endl;
    llenar(v1,l);
    cout<<"\nSegunda Cadena de Texto: "<<endl;
    llenar(v2,l2);
    concatenar(v1,v2,concatenacion,l,l2);
    mostrar(concatenacion,(l+l2));
    delete[] v1;
    delete[] v2;
    delete[] concatenacion;
}