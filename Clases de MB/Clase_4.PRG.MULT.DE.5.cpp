#include <iostream>
using namespace std;
int main(){
    float vali;
    cout<<"Deme un numero: ";cin>>vali;
    while(vali<=10||vali!=int(vali)){//maximo de n=27 con long long
        cout<<"El numero debe ser entero y mayor a 50"<<endl;
        cout<<"Deme otro un numero: ";cin>>vali;
    }
    int n=vali;
    int cont=0;
    long long sum=0,pro=1;
    cout<<"Los numeros con la propiedad son: "<<endl;
    for(int i=1;i<=n;i++){
        if(i%5!=0){
            sum+=i;
            pro*=i;
            cont++;
            cout<<i<<endl;
        }
    }
    cout<<"El sumatorio es: "<<sum<<endl;
    cout<<"El productorio es: "<<pro<<endl;
    cout<<"El prom: "<<float(sum)/float(cont)<<endl;
}
