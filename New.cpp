/*La conjetura de Goldbach afirma que: "Todo numero par mayor a 2 puede escribirse 
como la suma de dos numeros primos". Ejemplo: 20=13+7; 50=19+31. Elabore
un programa que calcule las posibles sumas de Goldbach de un numero.*/
#include<iostream>
using namespace std;
bool primo(float x);
int main()
{
	float n,b,i=1;
	do
	{
		cout<<"Ingrese un numero: ";
		cin>>n;
	}while(int(n)!=n||n<3);
	while(i<(n-i))
	{
		if(primo(i))
		{
		b=n-i;
		if(primo(b))
		{
			cout<<i<<"y"<<b<<"som primos que se suman de "<<n<<endl;
		}
		}
		i=i+1;
	}
	system("pause");//return 0;
}
bool primos(float x)
{
	int cont=0;
	if(x==1)
	{
		return true;
	}
	for (int i=1;i<x;i++)
	{
		if(int(x)%i==0)
		{
			cont=cont+1;
		}
	}
	if (cont==1)
	{
		return true;
	}
	else 
	{
		return false;
	}
}