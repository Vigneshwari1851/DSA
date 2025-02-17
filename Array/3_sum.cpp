// 3 sum 
// output:Triplets with sum 0 are:
//[-1, -1, 2]
//[-1, 0, 1]
// here we just need to concentrate about array only no need to worry about the vector   
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<vector<int>> triplet(int n, vector<int> &num){
    set<vector<int>> st;
    for(int i= 0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(num[i]+num[j]+num[k] == 0){
                    vector<int> temp = {num[i],num[j],num[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    vector<int>num(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    
    vector<vector<int>> result = triplet(n,num);
    cout << "Triplets with sum 0 are:\n";
    for (auto &t : result) {
        cout << "[" << t[0] << ", " << t[1] << ", " << t[2] << "]\n";
    }


    return 0;
}