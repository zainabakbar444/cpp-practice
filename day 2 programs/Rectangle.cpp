#include <iostream>
using namespace std;

int main (){
    int length;
    int width;
    cout<< "enter length: ";cin>>length;
    cout<<endl<< "enter width: ";cin>>width;
    double area = length*width;
    cout<<"Area: "<<area<<endl;
    double perameter = 2*(length+width);
    cout<<"perameter: "<<perameter;


}