#include <iostream>
using namespace std;

void order_bubble1(int *vec,int dym){
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
void Insercion(int A[],int n){
   bool encontrado;
   int aux;
   for(int i=1;i<n;i++){
      
aux=A[i];

      int j=i-1;
      encontrado=false;
      while((j>=0) and 
!encontrado
){
         if(A[j]>aux){
            A[j+1]=A[j];
            
j--;

         }else{
            encontrado=true;
         }
      }
      A[j+1]=aux;
   }
}

int main(){
    int dym=5;
    int vec[5]={3,0,-1,6,4};
    Insercion(vec,dym);
    for(int i=0;i<dym;i++) cout<<vec[i]<<" ";
    cout<<endl;
    system("pause");
}
