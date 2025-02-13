// sum of all element
#include <iostream>
using namespace std;

int sumOfEle(int arr[], int size){
    int sum = 0;
    for(int i=0 ; i< size;i++){
       sum+=arr[i];
    }
    return sum;
}


int main() {
    int size;
    cout << "Enter the size of the array:";
    cin >> size;
    int num[100];
    for(int i=0;i<size;i++){
        cin >> num[i];
    }
    
    cout<< "sum of all element: " << sumOfEle(num,size) << endl;
    return 0;
}