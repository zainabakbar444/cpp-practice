#include <iostream>
using namespace std;

int main(){
    int kilo;
    cout<<"enter kilometer ";cin>>kilo;cout<<endl;
    int meter = kilo*1000;
    cout<<"converting kilometer to meter: "<<meter<<endl;
    int centi = kilo*100000;
    cout<<"converting kilometer to centimeter: "<<centi<<endl;
    int mili = kilo*1000000;
    cout<<"converting kilometer to milimeter: "<<mili<<endl;

}