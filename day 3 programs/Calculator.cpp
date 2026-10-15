#include <iostream>
using namespace std;
double additon(double a, double b){
    return a+b;
}
double subtraction(double a, double b){
    return a-b;
}
double multiplication(double a, double b){
    return a*b;
}
double division(double a, double b){
    if(b == 0){
        cout<<"invalid value";
        return 0;
    }
    return a/b;
}
int remainder(int a, int b){
    return a % b;
}
double sqrootOFa(double a){
    return a*a;
}

int main(){
    //  Problem 5 — Calculator 🧮: 2 numbers + operator (+, -, *, /) → result! (else-if se — aur / pe zero-division ka guard mat bhoolna! 😉)
    // I : take 2 numbers from user.
    // P : calculate krna  print krwajnja\ calcultare ki options calculater ki chovce ko num ber dena then \ak number choose krnaj\ ha\ or fr usi choose kiy huy num ke a\ccording result ay ga\. using function or if else.
    // O : jo bhi hm num choose krain gy uske according ans.
    double x,y;
    cout<<"Enetr the value of x ";cin>>x;cout<<endl; 
    cout<<"Enetr the value of y ";cin>>y;cout<<endl; 
    cout<< "=== Calculator ===" << endl;
    cout<< "1. Add" << endl;
    cout<< "2. Subtract" << endl;
    cout<< "3. Multiply" << endl;
    cout<< "4. Divide" << endl;
    cout<< "5. remainder" << endl;
    cout<< "6. square Root" << endl;
    int choice;
    cout<< "Enter your Choice :  "; cin>>choice;cout<< endl;

    if(choice == 1){
        cout<<"the addition of the values is:  "<<additon(x,y);
    }
    else if(choice == 2){
        cout<<"the subtraction of the values is:  "<<subtraction(x,y);
    }
    else if(choice == 3){
        cout<<"the multiply of the values is:  "<<multiplication(x,y);
    }
    else if(choice == 4){
        cout<<"the division of the values is:  "<<division(x,y);
    }
    else if(choice == 5){
        cout<<"the ramiander of the values is:  "<<remainder(x,y);
    }
    else if(choice == 6){
        cout<<"the square  of the value is:  "<<sqrootOFa(x);
    }
    else{
        cout<<"please choose the number from the list. the number you enter is not in our list.";
    }
    return 0;
}