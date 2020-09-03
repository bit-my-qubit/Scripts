#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
//Evalua la primalidad (En este algoritmo 1 es primo)
int isprimo(int n){
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}
//Devuelve el enesimo primo (En este algoritmo 1 es primo)
int func_prim(int n){
    int i=1,cont=1;
    while(1){
        if(isprimo(i)){
            if(cont==n)break;
            cont++;
        }
        i++;
    }
    return i;
}
//carga y valida n
int load(){
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
    int a,b,n;
    n=load();
    int i=2;
    while(func_prim(i)<=n)
        i++;
    while(1){
        a=func_prim(i);
        if(isprimo(a+2)){
            b=a+2;
            break;
        }
        i++;
    }
    cout<<"si n="<<n<<" entonces"<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
    system("pause");
}










