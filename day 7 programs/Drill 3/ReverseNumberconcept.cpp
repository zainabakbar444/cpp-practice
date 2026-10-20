#include <iostream>
using namespace std;

int main(){
    //  reverse of Digits
    // I : take the  numbers from user and store in n variable.
    // P : reverse of digit by using n%10 or n/10. in the loop
    // O : the reverse of the digit store in the n.
    int n;
    cout<<"enter the value of n : ";cin>>n;cout<<endl;
    int reverse = 0;
    for(int i = n; n > 0; i--){
        int remainder = n % 10;
         n = n/10;
        reverse = reverse*10+remainder;
    }
    cout<<"Reverse of the digit is: "<<reverse;
    return 0;
}