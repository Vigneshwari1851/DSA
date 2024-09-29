// Online C++ compiler to run C++ program online

// Sort a 2D array row-wise

// Input:
// plaintext
// Copy code
// [
//   [64, 25, 12],
//   [22, 11, 30],
//   [4, 5, 9]
// ]

#include <iostream>
using namespace std;
int main() {
  
   int arr[3][3] = {
       {64,25,12},
       {22,11,30},
       {4,5,9}
   };
   
   int row = 3;
   int col = 3;
   
   for(int i =0;i<row;i++){
       for(int j = 0 ;j<col-1;j++){
           int mini = j;
           for(int k = j+1;k<col;k++){
               if(arr[i][k]<arr[i][mini]){
                   mini= k;
               }
           }
           if(mini!=i){
           swap(arr[i][j] ,arr[i][mini]);
       }
       }
       
       
       
   }
   
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

   
   
    return 0;
}