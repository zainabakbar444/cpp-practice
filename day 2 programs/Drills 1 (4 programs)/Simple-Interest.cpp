#include <iostream>
using namespace std;

int main(){
    int P, R, T;
    cout<<"Enter the value of P:  "; cin>>P;cout<<endl;
    cout<<"Enter the value of R:  "; cin>>R;cout<<endl;
    cout<<"Enter the value of T:  "; cin>>T;cout<<endl;

    double formula = (P*R*T)/100;
    cout<<"the formula is (P*R*T)/100"<<endl;
    cout<<"the ans of the following formula is:  "<< formula;

    return 0;
}