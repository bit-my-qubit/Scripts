#include <iostream>
#include <math.h>
using namespace std;
//Esto es como un pow(10,i) pero sin errores de redondeo
long mult10(int n){
    long acu=1;
    for(int i=1;i<=n;i++)
        acu*=10;
    return pow(10,n);
}
//Esto es para cargar el numero
long load(){
    float val;
    system("cls");
    cout<<"Deme un nro entero positivo: ";cin>>val;
    while(val<0||val!=int(val)){
        system("cls");
        cout<<"Error de carga, por favor deme un nro entero positivo: ";cin>>val;
    }
    system("cls");
    cout<<"Genial!"<<endl;
    return int(val);
}
int main(){
    int res;
    do{
        long n1,n2=0;
        int lng;
        n1=load();
        lng=log10(n1)+1;
        int aux=n1;
        for(int i=1;i<=lng;i++){
            aux=n1%(mult10(i));
            aux=(aux-(aux%mult10(i-1)))/mult10(i-1);
            //cout<<int((aux%mult10(i-1)))<<endl;
            n2+=aux*mult10(lng-i);
        }
        cout<<"Numero Dado: "<<n1<<endl;
        cout<<"Numero Invertido: "<<n2<<endl;
        cout<<"Diferencia: "<<n1-n2<<endl<<endl;
        cout<<"Otro numero? s=1/n=otro nro: ";cin>>res;
    }while(res==1);
}
