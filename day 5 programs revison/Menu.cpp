#include <iostream>
using namespace std;
string  stdGrade(int stdpercnt){
        if(stdpercnt >= 80 && stdpercnt <= 100){
            return "A";
        }
        else if(stdpercnt >= 65 && stdpercnt < 80){
            return "B";
        }
        else if(stdpercnt >= 55 && stdpercnt < 65){
            return "C";
        }
        else if(stdpercnt >= 40 && stdpercnt < 55){
            return "D";
        }
        else if(stdpercnt < 40){
            return "F";
        }
        else{
            return "Invalid Value";
        }
    }
double bijliBill(int units){
    double rate;
    if(units < 0){
        return -1;  // invalid ka signal
    }
    else if(units <= 100){
        rate = 5;
    }
    else if(units <= 200){
        rate = 8;
    }
    else{
        rate = 12;
    }
    return rate * units;  // ek return, sab ke baad!
}
int main(){
    int stdpercnt;
    
    int choice;
    do {
        cout<< "=== Grade & Billing Suite ===" << endl;
        cout<< "1. Grade Calculator" << endl;
        cout<< "2. Bijli Bill" << endl;
        cout<< "3. Payslip" << endl;
        cout<< "4. Exit" << endl;
        cout<< "Enter your Choice :  "; cin>>choice;cout<< endl;
        
        if(choice == 1){
            cout<<"enter student percentage: ";cin>>stdpercnt;cout<<endl;
            cout<<"the grade of student is : "<<stdGrade(stdpercnt)<<endl;
        }
        else if(choice == 2){
            int units;
            double rate;
            cout<<"Enter the units: ";cin>>units;cout<<endl;
            if(bijliBill(units) == -1){
                cout<<"Invalid units";
                return 0;
            }
            else{
            cout<<"you have to pay "<< bijliBill(units) <<".RS according to your units."<<endl;
            }
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