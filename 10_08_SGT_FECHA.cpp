#include <iostream>
#include <stdlib.h>//Libreria para utilizar system

using namespace std;

//Se almacenan los valores de los meses
int mess[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
int d,m,a;

//Procediminto de evaluacion de carga
void evalcarga(int& d, int& m){
    while(d<1||d>mess[m]||m>12||m<1){
        system("cls");
        cout<<"LA FECHA INGRESADA NO EXITE INGRESE OTRA"<<endl;
        cout<<"\tIngrese el dia: "; cin>>d;
        cout<<"\tIngrese el mes: "; cin>>m;
        cout<<"\tIngrese el anho: "; cin>>a;
    }
}

int main(){
    int op;
    do
    {
        cout<<"Ingrese el dia: "; cin>>d;
        cout<<"Ingrese el mes: "; cin>>m;
        cout<<"Ingrese el anho: "; cin>>a;
        int feb;
        //Se evalua si en anho es bisiesto
        if((a%4==0&&a%100!=0)||(a%400==0)){
            feb=29;
        }else{
            feb=28;
        }
        mess[2]=feb;
        //Se evalua si la fecha exite
        evalcarga(d,m);
        //Se calcula la fecha consecutiva
        if(d<mess[m])
            d++;
        else{
            d=1;
            if(m==12){
                m=1;
                a++;
            }else
                m++;
        }
        //Se imprime la fecha consecutiva
        cout<<"La fecha sgt es: "<<d<<"/"<<m<<"/"<<a<<endl<<endl;
        //Se imprimen opciones para el usuario
        cout<<"\tPara continuar"<<endl<<"\t\t 1-Salir"<<endl<<"\t\t 2-Otra fecha"<<endl<<"\tDigite su opcion: "; cin>>op;
        system("cls");
    }
    while(op==2);
}
