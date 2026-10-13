#include <iostream>
using namespace std;

double add(double a, double b){
    return a + b;
}
double subtract(double a, double b){
    return a - b;
}
double multiply(double a, double b){
    return a * b;
}
double divide(double a, double b){
    if(b == 0){
        cout<< "Error: cannot divide by zero!"; 
        return 0; 
    }
    return a / b;
}
int main(){
    
    cout<< "=== Calculator ===" << endl;
    cout<< "1. Add" << endl;
    cout<< "2. Subtract" << endl;
    cout<< "3. Multiply" << endl;
    cout<< "4. Divide" << endl;
    cout<< "Enter your Choice :  " << endl;
    int choice;
    cin>>choice;
    double x, y;
    cout<< "enter 2 numbers:  " << endl;
    cin >> x >> y;
    if(choice == 1){
        cout<<"addition of 2 numbers : "<<add(x, y);
    }
    else if(choice == 2){
        cout<<"Subtraction of 2 numbers : "<<subtract(x, y);
    }
    else if(choice == 3){
        cout<<"Multiplication of 2 numbers : "<<multiply(x, y);
    }
     else if(choice == 4){
        cout<<"Division of 2 numbers : "<<divide(x, y);
    }
    else{
        cout<<"sorry your choice is not available";
    }
    return 0; 
}
//  g++ "day 1 programs\Number-Guessing-Game.cpp" -o "day 1 programs\Number-Guessing-Game.exe"
