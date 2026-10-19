#include <iostream>
using namespace std;
int main(){
    // 
    // i: n ki 3 values leni hain 
    // un 3 eno values ko ko aps me multiply krna\ 
    // 0 un 3 vlaue ka\ multiply
    int n[3];
    for(int i = 0; i < 3; i++){
        cout<<"enter the value of n: ";cin>>n[i];cout<<" ";
    }
    int multiply = n[0] * n[1] * n[2];
    cout<<"the multiplication of these values are : "<<multiply;
    
}