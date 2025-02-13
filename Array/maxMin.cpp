// find max and min 
#include <iostream>
#include <climits> // For INT_MIN and INT_MAX
using namespace std;

int maxValue(int arr[], int size){
    int maxi = INT_MIN;
    for(int i=0 ; i< size;i++){
        maxi = max(maxi,arr[i]);
        // if(arr[i]>maxi){
        //     maxi = arr[i];
        // }
    }
    return maxi;
}

int minValue(int arr[], int size){
    int mini = INT_MAX;
    for(int i=0 ; i< size;i++){
        mini = min(mini,arr[i]);
        // if(arr[i]<mini){
        //     mini = arr[i];
        // }
    }
    return mini;
}


int main() {
    int size;
    cout << "Enter the size of the array:";
    cin >> size;
    int num[100];
    for(int i=0;i<size;i++){
        cin >> num[i];
    }
    
    cout<< "max value is: " << maxValue(num,size) << endl;
    cout<< "min value is: " << minValue(num,size) << endl;

    return 0;
}