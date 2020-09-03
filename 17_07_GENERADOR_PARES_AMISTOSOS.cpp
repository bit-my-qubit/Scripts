#include <iostream>
using namespace std;
/*En esta funcion (a,b) y (b,a) son pares distintos, los valores i deben ser enteros
Obs: esta función debe ser optimizada, pudiendo tener bucles innecesarios*/
void func_par_ami(int i, int &a, int &b){
    int cont=0;
    a=1;
    while(cont<i){
        b=1;
        for(int j=2;j<a;j++){
            if(!(a%j)) b+=j;
        }
        int aux=0;
        for(int j=1;j<b;j++){
            if(!(b%j)) aux+=j;
        }
        if(aux==a&&a!=b){
            cont++;
            if(cont==i)break;
        }
        a++;
    }
}
int main(){
    int i,a,b;
    int cont=1;
    while(cont<101){
        func_par_ami(cont,a,b);
        cout<<cont<<": "<<a<<"  "<<b<<endl;
        cont++;
    }
    system("pause");
}