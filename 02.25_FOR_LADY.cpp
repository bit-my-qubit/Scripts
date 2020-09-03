#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Deme un numero: "; cin>>n1;
    cout<<"Deme otro numero: "; cin>>n2;

    //Con if anidado (Significa que hay un if dentro de otro)
     //Ventaja: no se necesita usar el else if
     cout<<endl<<"Metodo 1 ";
    if(n1==n2){
        cout<<"Son iguales ";
    }else{
        if(n2<n1)
            cout<<"El mayor es: "<<n1;
        else
            cout<<"El mayor es: "<<n2;
    }

    //Con ? y (Es similar al Metodo 1)
    //Ventaja: se puede escribir todo en una sola linea sin usar el ; al final de cada sentencia
    //Es decir el codigo de abajo se puede escribir tambien como ((n1==n2)?cout<<"Son iguales ":((n2<n1)?cout<<"El mayor es: "<<n1:cout<<"El mayor es: "<<n2));
    cout<<"Metodo 2 ";
    ((n1==n2)?
        cout<<"Son iguales "
    :
        ((n2<n1)?
            cout<<"El mayor es: "<<n1
        :
            cout<<"El mayor es: "<<n2
        )
     );

    //Con if, else if, else
    //Ventaja: el codigo es mas corto
    cout<<endl<<"Metodo 3 ";
    if(n1==n2)
        cout<<"Son iguales";
    else if(n1>n2)
        cout<<"El mayor es "<<n1;
    else
        cout<<"El mayor es "<<n2;
    cout<<endl; //Esto es lo mismo que cout<<"\n";
    system("pause");
}
