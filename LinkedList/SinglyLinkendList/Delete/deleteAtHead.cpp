#include <bits/stdc++.h>
using namespace std;

// Linked List: 1 -> 2 -> 3 -> 4

// Output: 2 -> 10 -> 3 -> 4

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


Node* deleteAtHead(Node* head){
    if(head == NULL){
        return NULL;
    }
    
    Node* temp = head;
    head = temp->next;
    free(temp);
    return head;
    
}


int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout << "Original List: " ;
    printLL(head);
  
    head = deleteAtHead(head);

    cout  << "\nafter change: ";
    printLL(head);

    return 0;
}