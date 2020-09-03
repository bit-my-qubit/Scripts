//Algoritmo de numeros primos mas eficeinte al convencioal
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int n,i=2;
    cout<<"Deme un nro: "; cin>>n;
    n=abs(n);
    while(i<n){
        if(n%i==0)
            break;
        i++;
    }
    if(i==n)
        cout<<"El numero es primo";
    else
        cout<<"El numero no es primo";
}
