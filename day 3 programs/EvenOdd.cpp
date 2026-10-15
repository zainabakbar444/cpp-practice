#include <iostream>
using namespace std;

int main(){
    // Even/Odd — number lo, even ya odd (warm-up, if-else)
    // I : take number from the user.
    // P : if the number is divide by 2 easily then the number is even other wise off by using if else 
    // O: ever or odd
    int number;
    cout<<"Enter any number : ";cin>>number;cout<<endl;
    int even = number%2;
    if(even == 0){
        cout<<"your selected number is even."<<endl;
    }
    else{
        cout<<"your selected number is odd";
    }
}