// vector

#include <iostream>
#include <vector> 
using namespace std;
int main() {
    // Write C++ code here
    vector<int> v(5,20);
    cout << "Vector elements: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " " ;
        
    }
    
    cout<<endl;
    
    v.push_back(3);
    cout << "Vector elements after push_back: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    
    cout<<endl;
    
   v.insert(v.end(), {3, 2});  // need to use curly to insert more than 2 values  
    cout << "Vector elements after insert({3, 2}): ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    
     cout<<endl;
    
   v.emplace_back(8);  
    cout << "Vector elements emplace black: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    
    
    cout<<endl;
    vector<int> v1(v);
    cout << "copy of v ";
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout<<endl;
    
    cout << "To access single element ";
    cout<<v1[1]<<endl; // to access single element 
    cout<<v1[7]<<endl;
    //or
    cout<<v1.at(1)<<endl; // to access single element 
    cout<<v1.at(7)<<endl;
    
    vector<pair<int, int>> v3;
    
    v3.push_back({1,2});
    cout << "Vector of pairs after push_back: ";
    for (const auto& p : v3) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    
    cout<<endl;
    
    v3.emplace_back(1,2); //no need to use curly bracket
    cout << "Vector of pairs after emplace_back: ";
    for (const auto& p : v3) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    
    cout<< endl;
    
    //iterators
  
    vector<int> vec = {10, 20, 30, 40, 50};
    
    cout<<"iterators"<<" "<<endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout<<endl;
    
    //begin()
    vector<int>::iterator it = vec.begin();
    
    cout<< *(it)<< " ";
    it++;
     
    cout<< *(it)<< " ";
    
    cout<< endl; 
    
    //end
    vector<int>::iterator ve = vec.end()-1;
    
    cout<< *(ve)<< " ";
    
    ve--;
   
    cout<< *(ve)<< " ";
    
     cout<< endl; 
    
    
    //reverse
    
    vector<int>::reverse_iterator  e = vec.rbegin();
    cout<< *(e)<<" ";
    
    
    
    
    return 0;
}