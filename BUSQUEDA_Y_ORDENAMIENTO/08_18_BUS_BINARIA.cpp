#include <iostream>
using namespace std;
//El vector que recibe debe estar ordenado ascendentemente so
int search_bin(int vec[], int dym, int val){
    int li=0;
    int ls=dym-1;
    int cent;
    while((ls-li)>=0){
        cent=(li+ls)/2;
        if(val<vec[cent]) ls=cent-1;
        else if(val==vec[cent]) break;
        else li=cent+1;
    }
    return val==vec[cent]? cent : -1;
}
int main(){
    int dym=10;
    int vec[]={1,6,11,14,15,26,47,88,91,95};
    cout<<-1<<": "<<search_bin(vec,dym,-1)<<endl;
    cout<<15<<": "<<search_bin(vec,dym,15)<<endl;
    cout<<20<<": "<<search_bin(vec,dym,20)<<endl;
    cout<<96<<": "<<search_bin(vec,dym,96)<<endl;
    system("pause");
}
/*
//1 2 3 4 5 6 7 8 9
int li=0;
int ls=n-1;
int cent;
while(li>=0 & ls<=n-1){
    cent=(li+ls)/n;
    if(val<vec[cent]) ls=cent-1;
    else if(val==vec[cent]) break;
    else li=cent+1;
}
return val==vec[cent]? cent : -1;

1 2 3
1 2
1
*/