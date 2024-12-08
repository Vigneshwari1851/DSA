#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

void printLL(Node* head){
    Node* temp = head;
    while(temp){
        cout<< temp->data << " ";
        temp=temp->next;
    }
}


Node* insertAtHead(Node* head , int val){
    Node* temp = new Node(val, head);
    return temp;
}


int main() {
    vector<int> arr = {1,2,3,4};
    int val = 6;
    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);
    
    head = insertAtHead(head,val);
    
    printLL(head);
    
 

    return 0;
}