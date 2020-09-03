#include <iostream>
using namespace std;

void order_bubble(int *vec,int dym){
    bool is_order=false;
    while(!is_order){
        is_order=true;
        for(int i=0;i<dym-1;i++){
            if(vec[i]>vec[i+1]){
                int aux=vec[i];
                vec[i]=vec[i+1];
                vec[i+1]=aux;
                is_order=false;
            }
        }
    }
}

int main(){
    int dym=5;
    int vec[5]={3,0,-1,6,4};
    order_bubble(vec,dym);
    for(int i=0;i<dym;i++) cout<<vec[i]<<" ";
    cout<<endl;
    system("pause");
}
