#include <iostream>
using namespace std;
bool isPrime(int n){
     if(n <= 1) return false;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    // Problem 9 — Prime Check: bool isPrime(int n) function! Socho: 7 prime hai? 2,3,4,5,6 mein se koi divide karta hai? Nahi → prime! Loop + % + function — sab purane dost! 
    // I: n ki value lo user se
    // P: check kro ke n ki value prime ha\ ke nhi
    // O:true ya\ fbalse
    int n;
    cout<<"enter the value of n: ";cin>>n;cout<<endl;
    if(isPrime(n) == true){
        cout<<"your value "<< n<< " is prime number";
    }
    else{
        cout<<"your value "<<n << " is not prime number";
    }
    return 0;
}