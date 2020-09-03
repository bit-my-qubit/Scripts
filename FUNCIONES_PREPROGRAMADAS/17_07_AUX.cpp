#include <iostream>
#include <math.h>
using namespace std;

int checkArmstrong(int n1);
int checkPerfect(int n1);

int pot(int base,int n){
    int acu=1;
    for(int i=1;i<=n;i++)
        acu*=base;
    return acu;
}
int extract_digit(int num,int i){
    int aux=num;
    int lng=log10(num);
    for(int j=lng;j>=lng-i+2;j--) aux=num%pot(10,j);
    return aux/pot(10,(lng-i+1));
}
int checkArmstrong(int n1){
    int lng=log10(n1)+1;
    int sum=0;
    for(int i=1;i<=lng;i++) sum+=pot(extract_digit(n1,i),lng);
    if(sum==n1)return 1;
    return 0;
}
int checkPerfect(int n1){
    int sum=0;
    int i=1;
    while(i<n1){
        if(!(n1%i))sum+=i;
        i++;
    }if(sum==n1)return 1;
    return 0;
}
int mcd(int a, int b){
      if(b==0) return a ;
       else return mcd(b,a%b );
}
int areacuadrado(float base, float altura){
return  base*altura;
}
int bin(int N){
    if(N==0) return N%10;
    else return N%2 + 10*bin(int(N/2));
}

int main()
{
    int n=1,accuArm=0,accuPerfect=0;
    cout<<mcd(100,25)<<endl;
    cout<<mcd(25,100);
    system("pause");
    /*
    cout<<bin(0)<<endl;
    cout<<bin(1)<<endl;
    cout<<bin(10)<<endl;
    cout<<bin(110)<<endl;
    system("pause");
  	while(n>0 &&n<=1000){
	  cin>>n;
	  if(checkArmstrong(n)) accuArm++;
      if(checkPerfect(n)) accuPerfect++;	  
	}
    cout<<accuArm<<endl;
    cout<<accuPerfect;
    */
    return 0;
}
/*
#include <iostream>
using namespace std;
 
void hanoi(int num,char A,char C,char B)
{
    if(num==1)
    {
            cout<<"Mueva el bloque "<<num<<" desde "<<A<<" hasta  "<<C<<endl;
             
    }
    else
    {
        hanoi(num-1,A,B,C);
        cout<<"Mueva el bloque "<<num<<" desde "<<A<<" hasta  "<<C<<endl;
        hanoi(num-1,B,C,A);
    }
}
 
void main()
{
        int n;
        char A,B,C;
 
        cout<<"Los clavijas son A B C\n";
        cout<<"Numero de discos: ";
        cin>>n;
        hanoi(n,'A','C','B');
         
}
*/