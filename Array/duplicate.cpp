// Find duplicateElement in the array // output:duplicateElement: 3
#include <iostream>
using namespace std;

int findDup(int arr[], int n){
    int ans =0;
    for(int i=0;i<n;i++){
       ans = ans^arr[i];
       
   }
   
    for(int i=1;i<n;i++){
       ans = ans^i;
       
   }
   return ans;
}


int main() {

    int arr[7] = {6, 3, 1, 5, 4, 3, 2};
    int duplicateElement = findDup(arr, 7);
    cout << "duplicateElement: " << duplicateElement << endl;

    return 0;
}