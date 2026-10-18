#include <iostream>
using namespace std;
int main(){
    // Input n. n, n-1, … , 1 print karo, phir Liftoff!
    // Test: n = 5 → 5 4 3 2 1 Liftoff!
    // i: nput lo 
    // P: ulti counting bafckword counting 
    // O bafckword counting start hogi n value se or jany gi 1 tk 

    long n;
    cout<<"enter the value of n : ";cin>>n;cout<<endl;
     for(int i = n; i >=1; i--){
        cout<<i<<" ";
     }
     cout<<"Liftoff!";
}