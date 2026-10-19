#include <iostream>
using namespace std;
long factorial(long n){
    long long fact = 1;
    for(int i = n; i >= 1; i--){
        fact = fact * i;
    }
    return fact;
}
long Digitsum(long n){
    long sum = 0;
    for(int i = n; i >= 0; i--){
        sum = sum + i;
    }
    return sum;
}
int main(){
    int choice;
    do{
        cout<<"1.Factorial"<<endl;
        cout<<"2.Digit Sum"<<endl;
        cout<<"3.Exit"<<endl;
        cout<< "Enter your Choice :  "; cin>>choice;cout<< endl;
        if(choice == 1){
            long n;
            cout<<"enter the value of n : ";cin>>n;cout<<endl;
            cout<<"factorial of n is: "<<factorial(n)<<endl;
        }
        else if(choice == 2){
            long n;
            cout<<"enter the value of n : ";cin>>n;cout<<endl;
            cout<<"sum of the digit is: "<<Digitsum(n)<<endl;
        }
        else if(choice == 3){
            cout<<"exit"<<endl;
        }
        else{
            cout<<"invalid choice"<<endl;
        }
    }while (choice != 3);
}