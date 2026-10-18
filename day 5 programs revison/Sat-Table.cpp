#include <iostream>
using namespace std;
int main(){
    // Input n. Print n×1 se n×10 tak, har line par ek.
    // Test: n = 7 → 7 14 21 28 35 42 49 56 63 70
    // i: n lena ha\ user se 
    // p: n ka table print krna ha 1 se 10 tk 
    // O: n ka\ table
    int n;
    int Multiply;
    cout<<"enter the value of n : ";cin>>n;cout<<endl;
    for(int i = 1; i <= 10; i++){
        Multiply = n * i;
        cout<<n<<" X "<< i << " = "<<Multiply<<endl;
    }
}