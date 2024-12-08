#include <bits/stdc++.h>
using namespace std;

//we can use class or struct both are same will work

// struct Node {
//     public:
//     int data;
//     Node* next;
    
//     public:
//     Node(int data1,Node* next1){
//         data = data1;
//         next = next1;
//     }
    
//     public:
//     Node(int data1){
//         data = data1;
//         next = nullptr;
//     }
// };
class Node {
    public:
    int data;
    Node* next;
    
    public: //constructor to initialize values
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
     
    public: //last one as null or null pointer
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

int main() {
    
    vector<int> arr = {2,3,4,5,6};
    // to initialize 1st value that is head
    Node* head = new Node(arr[0]);
    // to link with nxt value 
    head->next = new Node(arr[1]);
    // to print 1st value
    cout<< head->data <<" ";
    // to print address 1st value
    cout<< head <<"\n";
    // to print 2nd value
    cout<< head->next->data << " ";
    // to print address of 2nd value
    cout<< head->next;

    return 0;
} 