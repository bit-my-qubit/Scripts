#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
    //srand(time(NULL));
    float m=4;
    float n=4;
    float mat[int(m)][int(n)];
    float *p,*start=&mat[0][0];
    int i=1;

    p=start;
    while(p!=(start+int(m)*int(n))){
        *(p++)=i;
        i++;
    }
    for(float *i=start;i<start+int(m)*int(n);i++){
        *i=1 + rand() % (100 +1 -1);
    }

    p=start;
    for(int i=0;i<int(m);i++){
        for(int j=0;j<int(n);j++){
            cout<<*(p+i*int(n)+j)<<"  ";
        }
        cout<<endl;
    }
    //cout<<mat[int((1.0*m)/2+0.5)][0];
    cout<<endl<<endl;
    /*
    bool is_order1=false;
    bool is_order2=false;
    while(!is_order1&&!is_order2){
        is_order1=true;
        int *start1=&mat[0][0];
        for(int *i=start1;i<start1+(m/2)*n-1;i++){
            if(*i>*(i+1)){
                int aux=*i;
                *i=*(i+1);
                *(i+1)=aux;
                is_order1=false;
            }
        }
        is_order2=true;
        int *start2=&mat[int((1.0*m)/2+0.5)][0];
        for(int *i=start2;i<start2+(m/2)*n-1;i++){
            if(*i<*(i+1)){
                int aux=*i;
                *i=*(i+1);
                *(i+1)=aux;
                is_order2=false;
            }
        }
    }
    */

    int desf=int(m/2+0.5)*n;
    start=&mat[0][0];
    float *lim=start+(int(m)/2)*int(n)-1;
    while(start<lim){
        float *elem_min=start,*elem_max=start+desf;
        for(float *i=start;i<=lim;i++){
            if(*elem_min>*i) elem_min=i;
            float *j=i+desf;
            if(*elem_max<*j) elem_max=j;
        }
        float aux=*start;
        *start=*elem_min;
        *elem_min=aux;
        aux=*(start+desf);
        *(start+desf)=*elem_max;
        *elem_max=aux;
        start++;
    }







    p=&mat[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<*(p+i*int(n)+j)<<"  ";
        }
        cout<<endl;
    }
    system("pause");
}
