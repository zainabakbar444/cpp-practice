#include <iostream>
using namespace std;

int main(){
    // 8. Factorial — n lo, n! nikalo: 5 → 120 (for ya while)
    // I: n user se lia
    // P: factorial nikalna\ user ki enter ki gai value ka for ya while loop se
    // O: n value ka\ fabctorial
    int n;
    cout<<"enter the value of n: ";cin>>n;cout<<endl;
    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial = factorial*i;
    }
    cout<<"Factorial of n is: "<<factorial;
}