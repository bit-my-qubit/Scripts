#include <iostream>
using namespace std;
//El vector que recibe debe estar ordenado ascendentemente
int search_sec(int vec[], int dym, int val){
    for(int i=0;i<dym;i++)
        if(vec[i]==val) return i;
    return -1;
}
int main(){
    int dym=10;
    int vec[]={1,6,11,14,15,26,47,88,91,95};
    cout<<-1<<": "<<search_sec(vec,dym,-1)<<endl;
    cout<<15<<": "<<search_sec(vec,dym,15)<<endl;
    cout<<20<<": "<<search_sec(vec,dym,20)<<endl;
    cout<<96<<": "<<search_sec(vec,dym,96)<<endl;
    system("pause");
}