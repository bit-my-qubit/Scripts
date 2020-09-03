#include <iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    float mat[m][n];
    int may_f=0,may_c=0;
    int pf,pc;
    //Carga
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            mat[i][j]=10+rand()%(100-10+1);
        }
    }
    for(int k=0;k<m;k++){
        for(int i=0;i<n;i++){
            if(mat[k][i]>=may_f){
                may_f=mat[k][i];
                pc=i;
            }
        }
        for(int j=0;j<m;j++){
            if(mat[j][pc]>=may_c){
                may_c=mat[j][pc];
                pf=j;
            }
        }
        if(pf==k) cout<<"Encontrado: "<<mat[pf][pc]<<endl;
    }
    //Salida
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<"  ";
        }
        cout<<endl;
    }
    system("pause");
}