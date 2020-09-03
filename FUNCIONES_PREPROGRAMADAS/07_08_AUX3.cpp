#define my_max 100
#include <iostream>

using namespace std;

void show(int m[][my_max],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<m[i][j]<<"  ";
        cout<<endl<<endl;
    }
    cout<<endl;
}
void CargaDI(int m[][my_max],int& carg,int& pf, int& pc, int& i, int& k, int& cont, int& inc){
        for(i=pc;cont<k;i+=inc){
            m[pf][i]=carg;
            carg++;
            cont++;
        }
        cont=0;
        pc=i;
}
void CargaSI(int m[][my_max],int& carg,int& pf, int& pc, int& i, int& k, int& cont, int& inc){
        for(i=pf;cont<k;i+=inc){
            m[i][pc]=carg;
            carg++;
            cont++;
        }
        cont=0;
        pf=i;
        if(inc==-1){
            pf=pf+1;
            pc=pc+1;
            if(k==2||k==3)
                k=1;
            else
                k=k-2;
        }
}
int main(){
    int n;
    cout<<"Deme la dimension: ";cin>>n;
    int m[n][my_max];

    int inc;//Define el desplazamiento Derecho-Izquierdo/Superior-Inferior
    int swd=0;//Define el desplazamiento por filas o columnas
    int pc, pf;//Guarda la posicion
    int i,k,cont,carg=0;//Variables auxiliares propias de la logica

    k=n-1;
    cont=0;
    inc=1;
    swd=0;
    pf=0, pc=0;
    carg=1;

    while(carg<(n*n+1)){
        if(swd==0){
            CargaDI(m,carg,pf,pc,i,k,cont,inc);
            swd=1;
        }else{
            CargaSI(m,carg,pf,pc,i,k,cont,inc);
            swd=0;
            inc*=-1;
        }
    }
    show(m,n);
    cout<<endl;
    system("pause");
}
