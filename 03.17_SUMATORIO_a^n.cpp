#include <iostream>
#include <math.h>
using namespace std;
long cal_ser1(int a, int exp){
    long sum=0;
    for(int i=0;i<=exp;i++){
        sum+=pow(a,i);
    	cout<<i<<endl;
    }
    return sum;
}
long cal_ser2(int a, int exp){
    long sum=1;
    for(int i=1;i<=exp;i++){
        long pot=a;
        for(int j=0;j<i-1;j++)
            pot*=pot;
        sum+=pot;
        cout<<i<<endl;
    }
    return sum;
}
bool vald(int n){
    if(n>0&&n<1000) return 1;
    else return 0;
}
int main(){
    int a,exp;
    //Forma alternativa de hacer validaciones con for(;;)
    while(1){
        cout<<"Deme un una base: ";cin>>a;
        cout<<"Deme un exponente maximo: ";cin>>exp;
        if(vald(a)&&vald(exp)) break;
    }
    cout<<"Met1: El valor de la serie sumatorio de a^n es: "<<cal_ser1(a,exp)<<endl;
    cout<<"Met2: El valor de la serie sumatorio de a^n es: "<<cal_ser2(a,exp);
    system("pause");
}
