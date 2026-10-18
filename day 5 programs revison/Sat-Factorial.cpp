#include <iostream>
using namespace std;
int main(){
    // Input n. long long mein n! print karo.
    // Tests: 5 → 120, 0 → 1, 20 → 2432902008176640000
    // i: input lo user se n ki value or ye store krwajni ha\ long me int me nhi 
    // P: fabctoria ka logic ye ha\ ke jo bhi vlaue daly us ki counting or vo counting aps me multiply hojany 
    // O: fbactorial of n
    long n;
    cout<<"enter the value of n : ";cin>>n;cout<<endl;
    long long fact = 1;
    for(int i = n; i >= 1; i--){
        fact = fact * i;
    }
    cout<<"factorial of "<<n<<" is: "<<fact;
}