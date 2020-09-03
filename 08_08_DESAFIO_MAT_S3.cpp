#include <iostream>
using namespace std;
int load(){
    float val;
    do{
        cout<<"Deme un valor: ";cin>>val;
    }while(val<1|int(val)!=val);
    cout<<"Genial"<<endl;
    return int(val);
}
int main(){
    int fil=load();
    int col=load();
}
