// Online C++ compiler to run C++ program online
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
    
    public:   //constructor to initialize values
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

Node* convertArr2LL(vector<int> &arr){
    Node* head =  new Node(arr[0]);
    Node* mover = head;
    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp; // or mover = mover->next;
    }
    return head;
}

int main() {
    
    vector<int> arr = {2,3,4,5,6};
    // to initialize 1st value that is head
    Node* head = convertArr2LL(arr);
    Node* temp = head;
    // to print all values
    while(temp){
        cout<< temp->data <<" ";
        temp = temp->next;
    }
    // to print 1st value
    // cout<< head->data;

    
} 