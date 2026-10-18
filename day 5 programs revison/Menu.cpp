#include <iostream>
using namespace std;
int main(){
    
    int choice;
    do {
        cout<< "=== Grade & Billing Suite ===" << endl;
        cout<< "1. Grade Calculator" << endl;
        cout<< "2. Bijli Bill" << endl;
        cout<< "3. Payslip" << endl;
        cout<< "4. Exit" << endl;
        cout<< "Enter your Choice :  "; cin>>choice;cout<< endl;
        if(choice == 1){
            cout<<" Grade Calculator"<<endl;
        }
        else if(choice == 2){
            cout<<" Bijli Bill"<<endl;
        }
        else if(choice == 3){
            cout<<" Payslip"<<endl;
        }
        else if(choice == 4){
            cout<<" Exit"<<endl;
        }
        else{
            cout<<"you entered the wrong value which is not in our menu."<<endl;
        }
    } while (choice !=4);
    
}