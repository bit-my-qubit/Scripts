//Derecha Izquierda o+
//Arriba/Abajo o-
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int n=1000;
int initval;
int m[1001][1001];

int inc;
int swd=0;
int pc, pf;
int i,k,cont,carg=0;

unsigned t0, t1;
double acu_tim1=0;
double acu_tim2=0;
int li=10;
int ls=1000;
int cant_m=20;

void load(int a , int b);
void show(){
    for(int s=0;s<n;s++){
        for(int t=0;t<n;t++){
            cout<<m[s][t]<<"  ";
        }
        cout<<endl<<endl;
    }
    cout<<endl;
}

//PROGRAMA 1
void CargaDI(){
        for(i=pc;cont<k;i+=inc){
            m[pf][i]=carg;
            carg++;
            cont++;
        }
        cont=0;
        pc=i;
}
void CargaAA(){
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
void init_P1(){
    k=n-1;
    cont=0;
    inc=1;
    swd=0;
    pc=0, pf=0;
    carg=initval;
    while(carg<(n*n+initval)){
        if(swd==0){
            CargaDI();
            swd=1;
        }else{
            CargaAA();
            swd=0;
            inc*=-1;
        }
    }
}

//PROGRAMA 2
void init_P2(){
    for (int a = 1; a <= n / 2; a++) {
      for (int i = a; i <= n - a; i++) {
         m[a][i] = initval;
         initval++;
      }
      for (int i = a; i <= n - a; i++) {
         m[i][n - a + 1] = initval;
         initval++;
      }
      for (int i = n - a + 1; i >= a + 1; i--) {
         m[n - a + 1][i] = initval;
         initval++;
      }
      for (int i = n - a + 1; i >= a + 1; i--) {
         m[i][a] = initval;
         initval++;
      }
   }
   if (n % 2 == 1) {
      m[n / 2 + 1][n / 2 + 1] = initval;
   }
}

int main(){
    //TESTEO PROGRAMA 1
    for(int num_i=0;num_i<cant_m;num_i++){
        initval=li+rand()%(ls-li+1);

        t0=clock();
            init_P1();
        t1 = clock();

        //cout<<"PRG_1: MATRIZ " <<num_i<<" COMPLETA"<<endl;
        acu_tim1 += (double(t1-t0)/CLOCKS_PER_SEC);
        cout<<"PRG_1: MATRIZ mat"<<num_i<<"time: "<<(double(t1-t0)/CLOCKS_PER_SEC)<<endl;
        //system("cls");
    }
    cout<<"Media del tiempo (PRG_1): "<<acu_tim1/cant_m;

    cout<<endl<<endl;

    //TESTEO PROGRAMA 2
    for(int num_i=0;num_i<cant_m;num_i++){
        initval=li+rand()%(ls-li+1);

        t0=clock();
            init_P2();
        t1 = clock();

        //cout<<"PRG_2: MATRIZ " <<num_i<<" COMPLETA"<<endl;
        acu_tim2 += (double(t1-t0)/CLOCKS_PER_SEC);
        cout<<"PRG_2: MATRIZ mat"<<num_i<<"time: "<<(double(t1-t0)/CLOCKS_PER_SEC)<<endl;
        //system("cls");
    }
    cout<<"Media del tiempo (PRG_2): "<<acu_tim2/cant_m<<endl;
    system("pause");
}
