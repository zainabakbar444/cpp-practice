#include <iostream>
using namespace std;
char getGrade(float prcnt){
    if(prcnt > 80 && prcnt <= 100){
        return 'A';
    }
    else if(prcnt > 60 && prcnt <= 80){
        return 'B';
    }
    else if(prcnt > 40 && prcnt <= 60){
        return 'C';
    }
    else if(prcnt > 20 && prcnt <= 40){
        return 'D';
    }
    else{
        return 'F';
    }
}
int main(){
    struct StudentRecordsMEGA
    {
        /* data */
        string name;
        float percentage;
        char grade ;
    };
    StudentRecordsMEGA Students[4];
    for(int i = 0; i < 4; i++){
        cout<<"enter your name: ";cin>>Students[i].name;cout<<endl;
        cout<<"enter your percentage: ";cin>>Students[i].percentage;cout<<endl;
        Students[i].grade = getGrade(Students[i].percentage);
    }
    for(int i = 0; i < 4; i++){
        cout<<"Name of student: "<<Students[i].name<<endl;
        cout<<"Percentage of student: "<<Students[i].percentage<<endl;
        cout<<"Grades of student: "<<Students[i].grade<<endl;
        
    }
    int topper = 0;                    // INDEX! (Day-3 champion wala!)
for(int i = 1; i < 4; i++){
    if(Students[i].percentage > Students[topper].percentage){
        topper = i;
    }
}
cout << "Topper: " << Students[topper].name
     << " (" << Students[topper].percentage
     << "%, Grade " << Students[topper].grade << ")";
}