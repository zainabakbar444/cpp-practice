#include <iostream>
using namespace std;

// Compound Assignment - x=10; x+=5, x*=2, x-=3, x/=4, x%=3 - 
int main(){
    int x = 10;
    cout<< "x: "<<x<<endl;
    x += 5;
    cout<< "x: "<<x<<endl;
    x *= 2;
    cout<< "x: "<<x<<endl;
    x -= 3;
    cout<< "x: "<<x<<endl;
    x /= 4;
    cout<< "x: "<<x<<endl;
    x %= 3;
    cout<< "x: "<<x<<endl;
}