#include <iostream>
#include <math.h>
using namespace std;
int isprimo(int n){
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}
void clear_window(){
    if(getenv( "OS" )=="Windows_NT")system( "cls" );
    else system( "clear" );//No sabia que el system() no discrimina OS para su uso, por eso system( "clear" ) es perfecto para lo que busco en Linux
}
int func_prim(int n){
    int i=1,cont=1;
    while(1){
        if(isprimo(i)){
            if(cont==n)
                break;
            cont++;
        }
        i++;
    }
    return i;
}
int load(){
    float val;
    cout<<"Deme un nro entero par >2: ";cin>>val;
    while(val<=2||int(val)%2||val!=int(val)){
        clear_window();
        cout<<"Error de carga, por favor deme un nro entero par >2: ";cin>>val;
    }
    clear_window();
    cout<<"Genial!"<<endl;
    return int(val);
} 
int main(){
    int n,a,b;
    n=load();
    a=2;
    while(a<(n-a)){
        if(isprimo(a)&&isprimo(n-a))cout<<a<<" "<<n-a<<endl;
        a++;
    }
    cout<<"Son todos";
    /*
    for(int k=4;k<=n;k+=2){
        for(int i=2;1;i++){
            a=func_prim(i);
            if(isprimo(k-a)){
                b=k-a;
                cout<<"si n="<<n<<" entonces"<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
            }
        }
    }*/
    cin.ignore();
    getchar();
}