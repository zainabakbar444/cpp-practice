#include <iostream>
using namespace std;

int linearSrch(int arr[], int n, int key){
    // int i;
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main(){
    // int i;
    int arr[10];
    cout<<"Enter 10 numbers";
    for(int i = 0; i < 10; i++){
        cout<<"next number";
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key to search";
    cin>>key;

    int result = linearSrch(arr, 10, key);
    if(result == -1){
        cout<<"not found";
    }
    else{
        cout<<"found at index "<< result;
    }
    return 0;
}