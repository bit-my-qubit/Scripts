#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

void genbol(int i);
bool isreboot();

int main(){
    int i;
    float pag;
    for(int k=0;k<5;k+=1)
        cout<<k<<endl;
    do{
        pag=0;i=0;
        cout<<"Introdusca el pago: ";cin>>pag;
        if(pag>=100){
            i=1+rand()%(1+5-1);
            genbol(i);
            if(i!=1){
                pag=pag-pag*(i-1)*0.25;
                cout<<"Gano un descueto del "<<(i-1)*25<<"%"<<endl;
            }else
                cout<<"Lamentablemente no gano ningun descuento"<<endl;
        }else
                cout<<"Para acceder a un descueto debe pagar una suma mayor a $100"<<endl;
        cout<<"El total a pagar es: $"<<pag<<"\n\n\n";
    }while(isreboot());
}
void genbol(int i){
    switch (i){
        case 1: cout<<"Optubo una bola Blanca"; break;
        case 2: cout<<"Optubo una bola Azul"; break;
        case 3: cout<<"Optubo una bola Verde"; break;
        case 4: cout<<"Optubo una bola Amarilla"; break;
        case 5: cout<<"Optubo una bola Roja"; break;
    }
    cout<<endl;
}
bool isreboot(){
    char r;
    cout<<"Desea comprar algo mas s/n?: ";cin>>r;
    if(r=='s'){
        system("cls");
        return true;
    }else
        return false;
}
