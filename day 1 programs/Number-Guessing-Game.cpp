#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;


// 1. Number Guessing Game — Computer 1–100 ke beech ek secret number soche.
// Tum guess karo, woh bataye "too high" ya "too low".
// Sahi hone par bataye kitni tries lagein.
// Hint: rand() % 100 + 1 se random number milta hai, srand(time(0)) start mein likhna.

int main()
{
    // int com_secret_code = 45, guess_num;
    // pehli line: random ko "seed" karo (warna har dafa same number ayega)
    srand(time(0));  
    int secret_code = rand() % 100 + 1;   // 45 ki jagah ye

    int maxAttempts = 10;
    int attempts = 0;
    int guess;
    while(guess != secret_code && attempts < maxAttempts)
    {
        cout<< "Guess the number  " ;
        cin >>guess;
        if(guess == secret_code){
            cout<<"congratulations you guess the right number "<<endl << "the remaining attempts are " << maxAttempts - attempts <<endl;
            
        }
        else if(guess > secret_code){
            cout<< "oops, the guess is too high "<<endl << "the remaining attempts are " << maxAttempts - attempts <<endl;
            if(attempts < maxAttempts){
                cout<< "Guess the number again " <<endl;
            }
        }
        else{
           cout<< "oops, the guess is too low "<<endl << "the remaining attempts are " << maxAttempts - attempts <<endl;
            if(attempts < maxAttempts){
                cout<< "Guess the number again " <<endl;
            }
        }
         attempts++;
    }
     if(attempts == 0){
        cout<< "the remaining attempts are " << maxAttempts - attempts <<endl << "limit is exceeded";
    }

}
//  g++ "day 1 programs\Number-Guessing-Game.cpp" -o "day 1 programs\Number-Guessing-Game.exe"