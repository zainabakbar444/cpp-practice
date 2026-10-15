#include <iostream>
#include <string>
using namespace std;

int main(){
    //  Problem 6 — Login System 🔐: password set karo (jaise "zainab123"), user se 3 attempts mein maango — sahi ho to "Welcome! 🎉", 3 ghalat hon to "LOCKED! 🔒" (while loop + if-else + string compare!).
    // I :  take 3 attemots from users through loop demajnd is entring passward or guessing password
    // P : user 3 attempt pe password guess kry ga\ after 3 attempts locked.
    //  if the the user guess the password correct then print hoga pasword other wise locked print hoga.
    string pass = "zainab123";
    string guesspass[3];
    for(int i = 0; i < 3; i++){
    cout<<"enter password. ";cin>>guesspass[i];cout<<endl;
        
        if(guesspass[i] == pass ){
            cout<<"welcome "<<endl;
            return 0;
        }
        else{
            cout<<"try again.you have left attempts "<<endl;
        
        }
        
       
    }
cout<<"locked";
}