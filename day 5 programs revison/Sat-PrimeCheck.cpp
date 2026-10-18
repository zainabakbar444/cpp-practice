#include <iostream>
using namespace std;
bool IsPrime(int n){
   if(n <=1){
    return false;
   }
   for(int i = 2; i < n; i++){
    if(n%i==0){
        return false;
    }
   }
   return true;
}

int main(){
    // bool isPrime(int n) likho. main mein n parho, prime ya not prime print karo.
    // Tests: 7 → prime, 6 → not prime, 2 → prime, 1 → not prime, 0 → not prime, 97 → prime
     int n;
    cout<<"enter the value of n: ";cin>>n;cout<<endl;
    cout<<"the value of n is prime?"<<endl;
    if(IsPrime(n) == true){
        cout<<"the value of n is prime"<<endl;
    }
    else{
        cout<<"the value of n is not prime"<<endl;

    }
}