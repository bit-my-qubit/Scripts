#include<iostream>
using namespace std;
int main(){
    while(1){
        system("cls");
        int num1, num2;
        //Obs: Se considero que los numeros ingresados son enteros positivos
        cin >> num1;
        cin >> num2;
        int sum1 = 0, sum2 = 0;
        for(int i=1;i<=num1;i++){
            if(!(num1%i))sum1+=i;
        }for(int i=1;i<=num2;i++){
            if(!(num2%i))sum2+=i;
        }
        cout << sum1<<endl;
        cout << sum2<<endl;
        if(num1==num2)
            cout <<"Los numeros son iguales";
        else if(num1==(sum2-num2)&&num2==(sum1-num1))
            cout <<"Los numeros son amistosos";
        else
            cout << "Los numeros no son amistosos";
        system("pause");
    }
}