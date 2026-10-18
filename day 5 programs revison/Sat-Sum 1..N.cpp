#include <iostream>
using namespace std;

int main(){
    // Input n. 1+2+…+n print karo.
    // Tests: 10 → 55, 100 → 5050
    // i: n lena\ ha user se
    // P jese fabctorial ka\ logic hota\ ha\ vese lekin isme multiply nhi krna\ plus krna\ ha\ 
    // output n ki vlaue ka ans print hoga
    long n;
    cout<<"enter the value of n : ";cin>>n;cout<<endl;
    long sum = 0;
    for(int i = n; i >= 0; i--){
        sum = sum + i;
    }
    cout<< "the sum of all the values less or equal to the valueu of n : "<<sum;
}