// Find unique element in the array // output:Unique element: 3
#include <iostream>
using namespace std;

int findUnique(int arr[], int n){
    int ans =0;
    for(int i=0;i<n;i++){
       ans = ans^arr[i];
       
   }
   return ans;
}


int main() {

    int arr[7] = {2,3,1,6,1,6,2};
    int uniqueElement = findUnique(arr, 7);
    cout << "Unique element: " << uniqueElement << endl;

    return 0;
}