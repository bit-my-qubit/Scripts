/*
Ejetucar
Incrementar
Evalua condicion

Muestra 4
Incrementa a 5
Evalua condicipn
*/
#include <iostream>
using namespace std;
void show(int vec[],int n){
    cout<<endl;
    for(int i=0;i<n;i++)cout<<vec[i]<<" ";
}
void move_right(int vec[],int n){
    int aux=vec[n-1];
    for(int i=n-1;i>0;i--) vec[i]=vec[i-1];
    vec[0]=aux;
}
void move_left(int vec[],int n){
    int aux=vec[0];
    for(int i=0;i<n-1;i++) vec[i]=vec[i+1];
    vec[n-1]=aux;
}
int main(){
    int n;
    cin>>n;
    int vec[n];
    for(int i=0;i<n;i++)vec[i]=i+1;
    show(vec,n);
    move_right(vec,n);
    show(vec,n);
    move_left(vec,n);//Permite retroceder el desplazamiento derecho
    show(vec,n);
}
