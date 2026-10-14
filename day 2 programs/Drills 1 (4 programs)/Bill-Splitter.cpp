#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int totalBill, NoOfFriends;
    cout<<"Total Bill : ";cin>>totalBill;cout<<endl;
    cout<<"No of Friends : ";cin>> NoOfFriends;cout<<endl;

    double separateBill = (double)totalBill/NoOfFriends;

    cout<<"The bill every person have to pay separatly: " << fixed << setprecision(2) << separateBill;

}