#include <iostream>
using namespace std;

int main(){
    int n,cont=1;
    cin>>n;
    while(n>=10){
        n/=10;
        cont++;
    }
    cout<<cont<<endl;
    cont=0;
    while(n>=0){
        n/=10;
        cont++;
    }
    cout<<cont<<endl;

    system("pause");
}