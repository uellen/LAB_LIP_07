#include <iostream>
using namespace std;

int mdc (int a , int b);

int main (){

    int x , y ;
    cout<<"Digite dois inteiros: \n";
    cin>> x >> y;

    cout<<"MDC entre "<<x<<" e "<<y<<" eh "<<mdc(x,y)<<endl;

    return 0;
}
int mdc (int a , int b){
    int r;


        r = a % b;

        a = b;
        b = r;

        if(r == 0){
            return a;
        }
        else{
            return mdc(a,b);
        }
}
