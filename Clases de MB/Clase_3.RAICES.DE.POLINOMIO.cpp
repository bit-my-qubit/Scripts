#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double a,b,c,dis;
    cout<<"Deme los coeficientes del polinomio de la forma ax^2+bx+c=0"<<endl;
    cout<<"a: ";cin>>a;
    cout<<"b: ";cin>>b;
    cout<<"c: ";cin>>c;
    dis=pow(b,2)-4*a*c;
    if(dis<0){
        cout<<"x1 = "<<-b/(2*a)<<"+"<<sqrt(-1*dis)/(2*a)<<endl;
        cout<<"x2 = "<<-b/(2*a)<<"-"<<sqrt(-1*dis)/(2*a)<<"i";
    }
    else if(dis==0)
        cout<<"x = "<<-b/(2*a);
    else{
        cout<<"x1 = "<<-b/(2*a)+sqrt(dis)/(2*a)<<endl;
        cout<<"x2 = "<<-b/(2*a)-sqrt(dis)/(2*a);
    }
}
