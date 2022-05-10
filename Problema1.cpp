#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

void cambio(int *a, int *b){
    int *c;
    *c=*a;
    *a=*b;
    *b=*c;
    cout <<"Ahora el primer valor es: "<<*a<<" y el segundo es: "<<*b;
}

int main(){
    int a;
    int b;
    cout <<"Ingrese primer valor: "<<endl;
    cin>>a;
    cout <<"Ingrese segundo valor: "<<endl;
    cin>>b;

    cambio(&a,&b);
    return 0;
}