#include<iostream>
#include<cmath>
using namespace std;

/*Función que devuelve el resultado de a^b.
Se supone que b es un número no-negativo.*/
int potencia(int a, int b){
    int i, p=1;
    for(i=0;i<b;i++) p*=a;
    return p;
}

/*Función que devuelve true si el número n es primo, y false en caso contrario.
Se supone que n es positivo.*/
bool esPrimo(int n){
    if(n==1) return false;
    int i;
    for(i=2;i<=sqrt(n);i++) if(n%i==0) return false;
    return true;
}

/*Función que devuelve la cantidad de dígitos de un número n.
Se supone que n es positivo.*/
int cantDigitos(int n){
    int dig=0;
    while(n>0){
        dig++;
        n/=10;
    }
    return dig;
}
/*
1234%1000=

123=(12345%10^(5=5-0))/10^(2=5-3)
234=(12345%10^(4=5-1))/10^(1=5-4)
345=(12345%1000)/10^(0=5-5)

12=(12345%100000)/10^(5-2)

2=(12345%10000)/10^(5-1)
*/
int cantPrimos_C_Digitos(int N,int C){
    int ctd=cantDigitos(N);
    int cont=0;
    if(C>ctd) return -1;
    else{
        for(int i=C;i<=ctd;i++){
            int new_num=(N%potencia(10,ctd-i+C))/potencia(10,ctd-i);
            if(esPrimo(new_num)) cont++;
        }
        return cont;
    }
}

/*Función principal: no modificar */
int main(){
    int N,C;
    cin>>N>>C;
    cout<<"Cantidad de primos de "<<C<<" digitos: "<<cantPrimos_C_Digitos(N,C)<<endl;
    system("pause");//return 0;
}