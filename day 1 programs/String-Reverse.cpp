#include <iostream>
using namespace std;

int main(){
    string s;
    cin>> s;
    string rev;
    for(int i = s.length()- 1; i >=0; i--){
        
        rev = rev + s[i];
    }
    cout<<"opposit : "<<rev;
    return 0;
}