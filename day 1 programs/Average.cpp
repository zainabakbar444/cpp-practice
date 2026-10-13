#include <iostream>
using namespace std;

int findMax(int arr[], int n){
    int i;
    int max = arr[0];
    for(i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
            
        }
    }
    return max;
}
int findMin(int arr[], int n){
    int i;
    int min = arr[0];
    for(i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        
        }
    }
    return min;
}
int findAvg(int arr[], int n){
    int i;
    int sum = 0;
    for(i = 0; i < n; i++){
        sum = sum + arr[i];
        
    } 
    return (double)sum / n; 
}
int main(){
    int i;
    int arr[10];
    for(i = 0; i < 10; i++){
        
        cin>> arr[i];
    }
    cout << "Max: " << findMax(arr, 10) << endl;
    cout << "Min: " << findMin(arr, 10) << endl;
    cout << "Avg: " << findAvg(arr, 10) << endl;

    return 0;
}