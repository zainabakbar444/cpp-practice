#include <iostream>
using namespace std;

int main(){
    //  product of Digits
    // I : take the  numbers from user and store in n variable.
    // P : product of digit by using n%10 or n/10. in the loop
    // O : the [product] of the digit store in the n.
    int n;
    cout<<"enter the value of n : ";cin>>n;cout<<endl;
    int multiply = 1;
    for(int i = n; n > 0; i--){
        int remainder = n % 10;
        int divider = n / 10;
        n = divider;
        multiply *= remainder;
    }
    cout<<"multiplication of the digit you entered: "<<multiply;
    return 0;
}