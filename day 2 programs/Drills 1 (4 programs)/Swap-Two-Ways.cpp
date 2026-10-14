#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 10;

    int temp = a;
    a = b;
    b = a;
    a = temp;


    // a = a + b;   // a = 5+10 = 15
    // b = a - b;   // b = 15-10 = 5  
    // a = a - b;   // a = 15-5 = 10  


    cout<<"a:  "<<a<<endl << "b:  "<<b;
     
     return 0;
}