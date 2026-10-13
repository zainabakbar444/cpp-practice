#include <iostream>
#include <fstream>
using namespace std;

int main(){
    struct student
    {
        string name;
        int age;
        double marks;
    };
    student Students[5];
    for(int i = 0; i <5; i++){
        cout<<"Name: ";cin>>Students[i].name; cout<<endl;
        cout<<"Age: ";cin>>Students[i].age; cout<<endl;
        cout<<"Marks: ";cin>>Students[i].marks; cout<<endl;
    }
    ofstream outFile("filesaveload.txt");
    for (int i = 0; i < 5; i++)
    {
        outFile << Students[i].name << " " << Students[i].age << " " <<Students[i].marks <<endl;
        
    }
    outFile.close();
    ifstream inFile("filesaveload.txt");
    if(!inFile){
        cout<<"Error: the file isn't exist.  "<<endl;
        return 1;
    }
    for(int i = 0; i < 5; i++){
        inFile >> Students[i].name >> Students[i].age >> Students[i].marks;
        cout<< "Name:  "<<Students[i].name<<endl<<"Age: "<<Students[i].age<<endl<<"Marks:  "<<Students[i].marks<<endl;
    }
    inFile.close();
}