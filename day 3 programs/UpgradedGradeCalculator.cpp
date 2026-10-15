#include <iostream>
#include <string>
using namespace std;

int main(){
    // I : take 4 students data from the user data include student name or percentage.
    // P : 4 student ka grade print krna through for loop or condition or in this process we are also useing struct.
    // O : the name of 4 students and their grades.
    struct student
    {
        /* data */
        string name;
        int percentage;
        char grade;
    };
    student Students[4];
    // first loop
    for(int i = 0; i < 4; i++){
        cout<<"Enter name of  student: ";cin>>Students[i].name;cout<<endl;
        cout<<"Enter percentage of  student: ";cin>>Students[i].percentage;cout<<endl;
    }
    // 2nd loop
    for (int i = 0; i < 4; i++)
    {
        
    if(Students[i].percentage >= 80 && Students[i].percentage <= 100){
        Students[i].grade = 'A'; 
    }
    else if(Students[i].percentage >= 65 && Students[i].percentage < 80){
        Students[i].grade = 'B';
    }
    else if(Students[i].percentage >= 55 && Students[i].percentage < 65){
        Students[i].grade = 'C';
        
    }
    else if(Students[i].percentage >= 40 && Students[i].percentage < 55){
        Students[i].grade = 'D';
        
    }
    else if(Students[i].percentage < 40){
        Students[i].grade = 'F';
    }
    else {
    Students[i].grade = 'F';
    }
    }
    // 3rd loop
    for(int i = 0; i < 4; i++){
        cout<<Students[i].name<<endl;
        cout<<Students[i].grade<<endl;
    }
    
    
}