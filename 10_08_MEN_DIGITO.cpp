/*
1234
1234/10=123 (lng-pos)
123%100=3  (pos-1)

1234/1=1234
1234%1000=4

1234/1000=1
1%0
*/
#include <math.h>
#include <iostream>
using namespace std;

long long p10(int exp){
    long long prod=1;
    for(int i=1;i<=exp;i++) prod*=10;
    return prod;
}

int extract_dig(int num,int i){
    int aux=num;
    int lng=log10(num);
    for(int j=lng;j>=lng-i+2;j--) aux=num%p10(j);
    return aux/p10(lng-i+1);
}
int getval(){
    float val;
    do{
        cout<<"Deme un numero entero positivo: "; cin>>val;
    }while(val<1||int(val)!=val);
    return int(val);
}
int main(){
    int n=getval();
    int min=0;
    for(int i=1;i<=(log10(n)+1);i++)
        if(min>=extract_dig(n,i)) min=extract_dig(n,i);
    cout<<min;
    system("pause");
}