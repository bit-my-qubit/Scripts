#include<iostream>
using namespace std;

int main(){
    int m,n,i,j,s;
	/*Entrada de datos (dimensiones de la matriz A y sus elementos) - No modificar esta parte*/
	cin>>m>>n;
	int A[m][n],B[m][n];
	for(i=0;i<m;i++) for(j=0;j<n;j++) cin>>A[i][j];
    /*Fin - Entrada de datos*/

    /*Rellenamos los bordes de B con los elementos originales (correspondientes) en A*/
    //En este for se copian los elementos de la primera columna y de la última
    for(i=0;i<m;i++){
        B[i][0] = A[i][0];
        B[i][n-1] = A[i][n-1];
    }

    //Ahora debemos copiar los elementos de la primera fila y de la última...

    for(i=0;i<n;i++){
        B[0][i] = A[0][i];
        B[m-1][i] = A[m-1][i];
    }

    /*Ahora calcularemos el resto de los elementos de B, según el enunciado*/
    
    for(int i=1;i<m-1;i++){
        for(int j=1;j<n-1;j++){
            B[i][j]=A[i][j+1]+A[i][j-1]+A[i+1][j]+A[i-1][j];
        }
    }

    /*Salida de datos (impresión de la matriz B) - No modificar esta parte*/
    for(i=0;i<m;i++){
		for(j=0;j<n;j++) cout<<B[i][j]<<" ";
    	cout<<endl;
	}
	/*Fin - Salida de datos*/
    system("pause");
}
