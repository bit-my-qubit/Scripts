#include<iostream> 
/* by Magno Barrientos :-P*/
/*Basicamente la idea es hacer dos generadores de numeros primos y meter uno en el otro como si
 el segundo fuera un for que va a operar con las salidas del primer "for" (osea los generadores de 
 numeros primos), como hacer un generador de numeros primos esta super bien explicado en e aula por el profe 
 colbes*/
 using namespace std;
 /*Hay que atender bien nomas dondeite pa metemos , por eso comparar con un for cada generador
  hace un poco mas facil*/
int main(){
 int i, a, d,e, N, L, j;
 cout<<" Introduzca un numero positivo  ";
 cin>>a;
 bool esprimo;/*Esta es la declaracion bool para el primer generador*/
 bool esprimo2;/*Esta es la declaracion bool para el segundo generador*/
 for(i=a+1; i!=0 ; i++)/*Aca comienza el primer generador*/
 {
      esprimo=true;  
     for(d=2;d<i;d++)
	  {{
		 if(i%d==0){
           esprimo=false;}}
      
         if(esprimo){
	      L=i;

	         for(j=a+1; j!=0 ; j++)/*Aca comienza el segundo generador*/
             {
	          esprimo2=true;
                for(e=2;e<j;e++)
	             {
		          if(j%e==0){
                    esprimo2=false;}}
      
                   if(esprimo2){
	                 N=j;}
	         if(j-L==2) /*Condicion para que sean primos gemelos*/
	          cout<<L<<" y "<<j<<endl ;/*Impresion de los resultados*/ }
	   } }
	  
	   }
	   
      system("pause");
	return 0 ;}