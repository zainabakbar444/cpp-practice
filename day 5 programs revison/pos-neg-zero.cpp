#include <iostream>
using namespace std;
int main(){
    // Input x. positive, negative ya zero print karo.
    // Tests: -4 → negative, 0 → zero, 9 → positive.
    long n;
    cout<<"enter the value of n : ";cin>>n;cout<<endl;
    if(n < 0){
        cout<<"the value of n is negative";
    }
    else if(n > 0){
        cout<<"the value of n is positive";
    }
    else{
        cout<<"the value of n is zero";
    }
}