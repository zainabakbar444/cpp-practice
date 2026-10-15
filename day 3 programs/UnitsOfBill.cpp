#include <iostream>
#include<cmath>
using namespace std;

int main(){
    // Problem 4 — Bijli ka Bill ⚡: units lo, slabs se bill nikalo (0–100 @Rs5, 101–200 @Rs8, 200+ @Rs12). else if ladder + thodi arithmetic!
    // I : take units from the users.
    // P : if the units range is 0 to 100 take charge is equal to 5rs ajnd if 101 to 200 take charge is equal to 8rs and if 200+ take charge is equal to 12rs. by using else if pr arithmetics.
    // O : charges according to the units range.

    int units;
    double rate;
    int bill;
    cout<<"Enter the units: ";cin>>units;cout<<endl;
    if(units < 0){
        cout<<"Invalid units!";
       return 0;
    }
    else if(units > 0 && units <= 100){
        rate = 5;
    }
    else if(units > 100 && units <= 200){
        rate = 8;
    }
    else{
        rate = 12;
    }
    
    
    bill = rate*units;
    cout<<"you have to pay "<< bill <<" according to your units.";
}