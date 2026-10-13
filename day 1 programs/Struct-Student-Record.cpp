#include <iostream>
using namespace std;

int main(){
    struct Student
    {
        string name;
        int age;
        double marks;
    };
    Student Students[5];

    for(int i = 0; i <5; i++){
        cout<<"Name: ";cin>>Students[i].name; cout<<endl;
        cout<<"Age: ";cin>>Students[i].age; cout<<endl;
        cout<<"Marks: ";cin>>Students[i].marks; cout<<endl;
    }
    Student topper = Students[0];
    for(int i = 1; i < 5; i++){
        if(Students[i].marks > topper.marks){
            topper = Students[i];
        }
    }
        cout<< "the topper student is : "<<endl<<topper.name<<endl<< topper.marks<<endl<<topper.age;
    }
