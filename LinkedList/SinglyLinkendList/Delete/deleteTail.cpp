#include <bits/stdc++.h>
using namespace std;

// Linked List: 1 -> 2 -> 3 -> 4
// val = 10, k = 3
// Output: 1 -> 2 -> 10 -> 3 -> 4

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

Node* deleteTail(Node* head){
    if(head == NULL){
        return NULL;
    }
    
    if (head->next == NULL) {
        delete head; 
        return NULL; 
    }
    
    Node* temp = head;
    
    while(temp->next->next != NULL){
        temp=temp->next;
        
    }
    delete(temp->next);
    temp->next = NULL; 
    return head;
        
    
}
// Node* deleteTail(Node* head) {
//     if (head == NULL) {
//         return NULL; // List is empty
//     }

//     // If there's only one node in the list
//     if (head->next == NULL) {
//         delete head; // Free the memory of the single node
//         return NULL; // Return NULL as the list is now empty
//     }

//     Node* temp = head;
//     // Traverse to the second last node
//     while (temp->next->next != NULL) {
//         temp = temp->next;
//     }
    
//     delete temp->next; // Delete the last node
//     temp->next = NULL; // Set the next of the second last node to NULL

//     return head; // Return the updated head
// }

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout << "Original List: " ;
    printLL(head);
  
    head = deleteTail(head);

    cout  << "\nafter change: ";
    printLL(head);

    return 0;
}