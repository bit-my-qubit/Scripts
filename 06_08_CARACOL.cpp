#define my_max 500
#include <iostream>

using namespace std;

void show(int m[][my_max],int rows, int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++)
            cout<<m[i][j]<<"  ";
        cout<<endl<<endl;
    }
    cout<<endl;
}
void CargaDI(int m[][my_max],int& carg,int& pf, int& pc, int& kcols, int& cont, int& inc){
        int i;
        for(i=pc;cont<kcols;i+=inc){
            m[pf][i]=carg;
            carg++;
            cont++;
        }
        cont=0;
        pc=i;
        if(inc==-1) kcols=kcols-2;
}
void CargaSI(int m[][my_max],int& carg,int& pf, int& pc, int& krows, int& cont, int& inc){
        int i;
        for(i=pf;cont<krows;i+=inc){
            m[i][pc]=carg;
            carg++;
            cont++;
        }
        cont=0;
        pf=i;
        if(inc==-1){
            pf++;
            pc++;
            if(krows<3)krows=1;
            else krows=krows-2;
        }
}
int main(){
    int rows,cols;
    cout<<"Fila: ";cin>>rows;
    cout<<"Columnas: ";cin>>cols;
    int m[rows][my_max];

    int inc=1;//Define el desplazamiento Derecho-Izquierdo/Superior-Inferior (1 -1)
    int is_loadcols=true;//Define el desplazamiento es por columnas
    int pf=0, pc=0;//Guarda la posicion
    int i,krows,kcols,cont=0,carg=1;//Variables auxiliares propias de la logica

    krows=rows-1;
    kcols=cols-1;

    while(carg<=rows*cols){
        if(is_loadcols){
            CargaDI(m,carg,pf,pc,kcols,cont,inc);
            is_loadcols=false;
        }else{
            CargaSI(m,carg,pf,pc,krows,cont,inc);
            is_loadcols=true;
            inc*=-1;
        }
    }
    show(m,rows,cols);
    cout<<endl;
    system("pause");
}