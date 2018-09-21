#include <iostream>
using namespace std;

long int tribonacci (long int n);
int main (){
    int num;

    cout<<"Por favor, digite um inteiro no intervalo de zero até infinito: \n";
    cin>>num;

    for (int i = 0; i<=50; i++){
    cout<<tribonacci(i)<<endl;
    }

    return 0;
}

long int tribonacci(long int n){

    if ( n==0 ){
        return 0;
    }
    else if( n==1 ){
        return 0;
    }
    else if ( n==2 ){
        return 1;
    }
    else{
        return tribonacci(n-3) + tribonacci(n-2) + tribonacci(n-1);
    }
}
