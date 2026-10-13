#include <iostream>
using namespace std;

bool IsPalindrome(string s){
    string rev = "";
    for(int i = s.length() - 1; i >= 0; i--){
        rev = rev + s[i];

    }
    if(s == rev){
        cout<<"true"<<endl;

        return true;
    }
    else{
        cout<<"false"<<endl;
        return false;

    }
}
int main(){
    string s;
    cin>>s;
    cout<<"the word is Palindrome?"<<endl<<IsPalindrome(s);
}