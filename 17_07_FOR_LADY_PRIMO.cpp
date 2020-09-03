#include<iostream>
#include<cstdlib>
using namespace std;
bool primo ( 
int p
 )
{
      int div = 2, cont = 1;
      //div variable utilizada para los divisores de p.
      //cont, variable que cuenta los divisores de p.
      while(cont==1&&div<=p/2)
      {
            if(p%div==0) cont++;
            else div++;
      }
      if (cont==1)

    return true;
    else
    return false;

}
int main()
{
      
float N;
      //N = numero entero y positivo ingresado por el usuario
      cout<<"Introduzca un nro entero y positivo: ";
      
cin>>N;

      
while
(N!=int(N)||N<0) //validacion de variable
      {
            cout<<"Introduzca un nro entero y positivo: ";
            cin>>N;
      }
      cout<<"\n\nLos factores primos de "<<N<<" son = ";
      
for
(int i=2; i<=N; i++)//busqueda de los divisores primos de N
            
{if (int(N)%i==0 && primo(i)) //verificacion de que i sea divisor y numero primo
   { cout<<i<<"\t";
    cout<<"\n\n\n";}
}
system("pause");
}