#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
    //srand(time(NULL));
    int m=4;
    int n=4;
    int mat[m][n];
    int *p,*start=&mat[0][0];
    int i=1;

    p=start;
    while(p!=(start+m*n)){
        *(p++)=i;
        i++;
    }
    for(int *i=start;i<start+m*n;i++){
        *i=1 + rand() % (100 +1 -1);
    }

    p=start;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<*(p+i*n+j)<<"  ";
        }
        cout<<endl;
    }
    //cout<<mat[int((1.0*m)/2+0.5)][0];
    //cout<<endl<<endl;
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

    int desf=int((1.0*m)/2+0.5)*n;
    start=&mat[0][0];
    int *lim=start+(m/2)*n-1;
    cout<<*(start+desf)<<endl;
    while(start<lim){
        int *elem_min=start,*elem_max=start+desf;
        for(int *i=start;i<=lim;i++){
            if(*elem_min>*i) elem_min=i;
            int *j=i+desf;
            if(*elem_max<*j) elem_max=j;
        }
        int aux=*start;
        *start=*elem_min;
        *elem_min=aux;
        aux=*(start+desf);
        *(start+desf)=*elem_max;
        *elem_max=aux;

        cout<<endl<<*(start+desf)<<endl;
        p=&mat[0][0];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<*(p+i*n+j)<<"  ";
        }cout<<endl;}
        cout<<endl;

        start++;

    }
    p=&mat[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<*(p+i*n+j)<<"  ";
        }
        cout<<endl;
    }
    system("pause");
}
