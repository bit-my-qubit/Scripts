#include <iostream>
#include <math.h>
using namespace std;

void order_selec1(int vec[],int n){
    for(int i=0;i<n;i++){
        int men=vec[i],pos=i;
        for(int j=i;j<n;j++){
            if(vec[j]<=men){
                men=vec[j];
                pos=j;
            }
        }
        vec[i]=vec[i]+vec[pos];
        vec[pos]=vec[i]-vec[pos];
        vec[i]=vec[i]-vec[pos];
    }
}
void order_selec2(int vec[],int n){
    for(int i=0;i<n;i++){
        int pos=i;
        for(int j=i+1;j<n;j++)
            if(vec[j]<vec[pos])pos=j;
        int aux=vec[pos];
        vec[pos]=vec[i];
        vec[i]=aux;
    }
}
int main(){
    int dym=5;
    int vec[5]={3,0,-1,-1,4};
    int a,b;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b<<endl;
    order_selec2(vec,dym);
    for(int i=0;i<dym;i++) cout<<vec[i]<<" ";
    cout<<endl;
    order_selec1(vec,dym);
    for(int i=0;i<dym;i++) cout<<vec[i]<<" ";
    cout<<endl;
    system("pause");
}