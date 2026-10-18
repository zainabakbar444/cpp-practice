#include <iostream>
using namespace std;

int main(){
    // Input year. leap ya not leap print karo.
    // Tests: 2024 → leap, 1900 → not leap, 2000 → leap, 2023 → not leap
    long n;
    cout<<"enter the value of n : ";cin>>n;cout<<endl;
    if(((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0)){
        cout<<"the year is leap";
    }
     else {
        cout<<"the year is not leap";
    }
}