#include <iostream>
using namespace std;
bool isPrime(int n){
    if(n<= 1){
            return false;
        }
    for(int i = 2; i < n; i++){
        
        if(n%i == 0){
            return false;
        }
        
    }
    return true;
}
int main(){
    int n;
    cout<<"enter the value of n : ";cin>>n;cout<<endl;
    cout<<"isprime: "<<isPrime(n);

}