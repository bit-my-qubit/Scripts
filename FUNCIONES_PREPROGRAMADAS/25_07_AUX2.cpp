//El 1
//1. Escriba un programa en C++ que lea un número entero y positivo, obtenga e imprima
//todos sus factores primos.
#include <iostream>
#include <math.h>
using namespace std;

bool isprimo(int n,int i){
        if(i==0||i==1) return true;
        if(n%i==0) return false;
        return isprimo(n,i-1);
}
int inv(int n){
        int lng_m=log10(n);
        if(n==0) return 0;
        return (n%10)*pow(10,lng_m)+inv(n/10);
}
int bin(int N){
        if(N<1) return N;
        else return N%2 + 10*bin(int(N/2));
}

bool primo(int n){
        for(int i=2;i<n;i++){
                if(n%i==0) return false;
        }
        return true;
}
/*No se puede hacer una funcion que devuelva todos los fatores primos
porque fact solo puede devolver un valor (int), por eso lo cambie por un procedimiento (void)
que muestra cada factor cundo lo encuentra*/
void show_fact(int n)
{
        cout<<endl;
        for(int i=2;i<=n;i++){
                if(isprimo(i,i-1)&n%i==0)cout<<i<<"  ";
        }
}
/*Este es una procedimiendo que muestra la descomposion en factores primos
es muy parecido a show_fact*/
void show_desc(int n)
{
        cout<<endl;
        for(int i=2;i<=n;i++){
                if(isprimo(i,i-1)&n%i==0){
                        cout<<i;
                        int aux=n;
                        int cont=0;
                        do{
                                aux/=i;
                                cont++;
                        }while(aux%i==0);
                        cout<<"^"<<cont<<endl;
                }
        }
}
int main ()
{

        cout<<inv(1234567)<<endl;
        int n;	
	do
	{
		cout<<"digite un numero entero y positivo: ";
		cin>>n;
	}
	while(n!=int(n) or n<1);

        cout<<"sus factores primos son: ";
        show_fact(n);
        cout<<endl;
        cout<<"sus descomposicion en factores primos es: ";
        show_desc(n);
	system("pause");//return 0;
}

/*El 2
#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
int inversa(int );
int main ()
{
	int n,inver;
	do
	{
		cout<<"ingrese un numero entero y positivo: ";
		cin>>n;
	}
	while(n!=int(n) or n<0);
	inver=inversa(n);
	cout<<"su inverso es: "<<inver<<endl;
        cout<<"Diferencia: "<<n-inver;
	system("pause");
	return 0;
}
long long pot10(int exp){
        long long acu=1;
        for(int i=0;i<exp;i++) acu*=10;
        return acu;
}
int inversa(int n)
{
	int dig,a,b=0;
	dig=log10(n) +1;
	for(int i=0;i<dig;i++)
	{
                a=n;
                a=n%pot10(i+1);
                a=a/pot10(i);
                b+=a*pot10(dig-i-1);
	}
	return b;
}
*/