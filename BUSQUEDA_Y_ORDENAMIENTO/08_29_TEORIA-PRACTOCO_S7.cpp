#include<iostream>

using namespace std;



int validar()

{

    float x;

    do

    {

        cout<<"Introduzca el valor: ";

        cin>>x;

    }

    while(x!=int(x) or x<0);

    return int(x);

}



int main()

{

    cout<<"Para m:"<<endl;

    int m=validar();

    cout<<"Para n: "<<endl;

    int n=validar();



    int MAT[m-1][n-1];



    int *p=
        &MAT[m][n]
        ;



    for(int i=0; i<m*n; i++)

    {

        cout<<"Elemento "<<i<<endl;

        if(i==0) *(p+i)=
                validar()
                ;

        else

        {

            *(p+i)=validar();

            while(*(p+i)<
                    *(p+i-1)
                 )

            {

                cout<<"Error, debe ser mayor al anterior"<<endl;


                *(p+i)
                    =validar();

            }

        }

    }



    int prod=*p*(
                 *(p+m*n-1)
             );



    cout<<"El producto entre el primer y el ultimo elemento es: "<<prod<<endl;



    return 0;

}
