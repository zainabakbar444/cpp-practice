#include <iostream>
using namespace std;

int main (){
    // 7. Multiplication Table — n lo, table print karo: 5 x 1 = 5 ... 5 x 10 = 50 (for loop)
    // I: n ki value lo user se
    // P: n ka\ table chly ga us value pr jo user enter kry ga\ or loop chly gi pora\ table ki
    // O: output ay ga\ tafble of value n

    int n;
    cout<<" Enter the value of n: ";cin>>n;cout<<endl;
    int multiplies;
    for(int i = 1; i <= 10; i++){
        multiplies = n * i;
        cout<<n<<" X "<<i<<" = "<<multiplies<<endl;
    }
}