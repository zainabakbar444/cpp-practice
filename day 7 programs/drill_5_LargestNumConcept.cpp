#include <iostream>
using namespace std;

int main(){
    //  Drill 5 — Largest Digit: number ka sab se bara digit?
    // I : take the  numbers from user and store in n variable.
    // P : recognize the digit by using n%10 or n/10. in the loop ajnd find out the largest numbers
    // O : the [largest numbers] in the digit store in the n.
    int n;
    int champion = 0;
    cout<<"enter the value of n : ";cin>>n;cout<<endl;
    for(int i = n; n > 0; i--){
        int remainder = n % 10;
        n = n / 10;
        if(remainder > champion){
            champion = remainder;
        }
    }
    cout<<"the largest number is: "<<champion;
    return 0;
}