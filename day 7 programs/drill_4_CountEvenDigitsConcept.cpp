#include <iostream>
using namespace std;

int main(){
    //  Drill 4 — Count Even Digits: number mein kitne digits even hain?
    // I : take the  numbers from user and store in n variable.
    // P : recognize the digit by using n%10 or n/10. in the loop ajnd find out total even numbers
    // O : the [total even numbers] in the digit store in the n.
    int n;
    int counter = 0;
    cout<<"enter the value of n : ";cin>>n;cout<<endl;
    for(int i = n; n > 0; i--){
        int remainder = n%10;
        n = n/10;
        if(remainder % 2 == 0){
            counter++;
        }
        
    }
    cout<<"total even numbers in that value are: "<<counter;
    return 0;
}