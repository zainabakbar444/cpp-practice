#include <iostream>
using namespace std;

int main(){
    //  Sum of Digits
    // I : take the  numbers from user and stre in n variable.
    // P : Sum of digit by using n%10 or n/10. in the loop
    // O : the sum of the digit store in the n.
    int n;
    cout<<"enter the value of n : ";cin>>n;cout<<endl;
    int sum = 0;
    for(int i = n; n > 0; i--){
       int remainder  = n%10;
       int divider = n/10;
       n = divider;
       sum += remainder;
    }
    cout<<"sum: "<<sum;
    return 0;
}