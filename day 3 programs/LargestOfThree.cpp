#include <iostream>
using namespace std;

int main(){
    // Problem 3 — Largest of Three: 3 numbers lo, sab se bara batao (nested if ya && se)!
    // I : take 3 numbers from the userby using for loop.
    // P : find the largest number from that 3 numbers by using nested if ya and operator se.
    // O : largest Number
    int num[3];
    int largerNum;
     
     for(int i = 0; i < 3; i++){
        cout<<"Enter the numbers:  ";cin>>num[i];cout<<endl;
        
    }
    largerNum = num[0];
    for(int i = 0; i < 3; i++){
        if(num[i] >= largerNum){
        largerNum = num[i];
        }
    }
        cout<<"the largest num from your written numbers is : "<<largerNum;
   
}