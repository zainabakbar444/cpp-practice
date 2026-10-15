#include <iostream>
using namespace std;

int main(){
    // Grade Calculator — percentage → A/B/C/D/F (else if ladder — kal wala pending hissa!)
    // I : take percentage of  students from the user.
    // P : every student results checked by the grade calculater either the result is grade a\  or b or c or d or f by using else if
    // O : grades according to the result.
    int stdPercentage;
    cout<<"enter student percentage: ";cin>>stdPercentage;cout<<endl;

    if(stdPercentage >= 80 && stdPercentage <= 100){
        cout<<"this student grade according to percentage is : A."<<endl;
    }
    else if(stdPercentage >= 65 && stdPercentage < 80){
        cout<<"this student grade according to percentage is : B"<<endl;
    }
    else if(stdPercentage >= 55 && stdPercentage < 65){
        cout<<"this student grade according to percentage is : C"<<endl;
    }
    else if(stdPercentage >= 40 && stdPercentage < 55){
        cout<<"this student grade according to percentage is : D"<<endl;
    }
    else if(stdPercentage < 40){
        cout<<"this student grade according to percentage is : F"<<endl;
    }
}