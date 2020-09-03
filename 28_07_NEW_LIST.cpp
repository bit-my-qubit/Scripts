#include<iostream>
using namespace std;

/*Función que carga un vector de N elementos con valores introducidos por teclado*/
void cargarVector(int A[], int N){
    int i;
    for(i=0;i<N;i++) cin>>A[i];
}

/*Función que muestra en pantalla los elementos de un vector de N elementos*/
void imprimirVector(int A[], int N){
    int i;
    for(i=0;i<N;i++) cout<<A[i]<<" "; cout<<endl;
}

/*Función que indica con verdadero si un elemento x está en un vector de N elementos, y
falso en caso contrario.
El entero "salto" indica el incremento en el proceso de recorrer el vector*/
bool estaEnElVector(int A[], int N, int x, int salto){
    int i;
    for(i=0;i<N;i+=salto){
        if(x==A[i]) return true; //x está en el vector (en la posición i)
    }
    return false; //ya que no se encontró x en el proceso de búsqueda
}

/*Función que devuelve la cantidad de elementos distintos en un vector de N elementos*/
int contarElementosDistintos(int A[], int N){
    int elemDist=0; //contador con el nro de elementos distintos
    int B[N]; //vector que almacenará los elementos distintos de A (como máximo, hay N distintos)
    int i; //índice
    for(i=0;i<N;i++){
        if(!estaEnElVector(B,elemDist,A[i],1)) B[elemDist++] = A[i]; //si A[i] no estaba en B, lo agregamos
    }
    return elemDist;
}
//Devuelve la cantidad de elementos repetidos en un vector
int getcant_rpt(int L1[],int N,int val){
    int cont=0;
    for(int i=0;i<N;i++) if(val==L1[i]) cont++;
    return cont;
}
//"Devuelve" un vector sin valores repetidos
void setvector_srpt(int V_srpt[],int dym_srpt,int V_rpt[],int dym_rpt){
    int j=0;
    for(int i=0;i<dym_rpt;i++) if(!estaEnElVector(V_srpt,j,V_rpt[i],1)) V_srpt[j++]=V_rpt[i];
}
void obtenerListaL2(int L1[],int L2[],int N,int M){
    int dym_srpt=M/2;
    int V_srpt[dym_srpt];
    setvector_srpt(V_srpt,dym_srpt,L1,N);
    for(int i=0;i<M/2;i++){
        L2[2*i]=V_srpt[i];
        L2[2*i+1]=getcant_rpt(L1,N,V_srpt[i]);
    }
}

int main(){
    int N; //Numero de elementos de L1
    cin>>N; //Cargamos N
    int L1[N]; //Vector que almacenará la lista de entrada
    cargarVector(L1,N); //Cargamos el vector
    int M =2*contarElementosDistintos(L1,N) /*completar*/; //M debe contener la cantidad de números distintos en L1
    int L2[M]; //Vector que almacenará los números distintos con el nro de veces que aparecen en L1
    obtenerListaL2(L1,L2,N,M); //Obtenemos la lista L2 según la descripción del problema
    imprimirVector(L2,M); //Mostramos la lista L2
    system("sleep 10000000000d");//return 0;
}
