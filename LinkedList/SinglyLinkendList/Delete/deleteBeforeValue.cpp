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


Node* deleteAtHead(Node* head){
    if(head == NULL){
        return NULL;
    }
    
    Node* temp = head;
    head = temp->next;
    free(temp);
    return head;
    
}
Node* deleteTail(Node* head){
    if(head == NULL){
        return NULL;
    }
    
    // If there's only one node in the list
    if (head->next == NULL) {
        delete head; // Free the memory of the single node
        return NULL; // Return NULL as the list is now empty
    }
    
    Node* temp = head;
    
    while(temp->next->next != NULL){
        temp=temp->next;
        
    }
    delete(temp->next);
    temp->next = NULL; 
    return head;
        
    
}
Node* deleteAtKth(Node* head, int k){
    if(head == NULL){
        return NULL;
    }
    if(k==1){
        Node* temp = head;
        head = temp->next;
        delete temp;
        return head;
    }
    Node* temp = head;
    int count = 0;
    while(temp!=NULL && count < k - 1){
        count++;
        temp=temp->next;
    }
    
    if (temp == NULL || temp->next == NULL) {
        return head; 
    }
    
    Node* nodeToDelete = temp->next; 
    temp->next = nodeToDelete->next;  
    delete nodeToDelete; 

    return head; 
}
Node* deleteBeforeValue(Node* head, int value) {
    if (head == NULL || head->next == NULL) {
        return head; // List is empty or has only one node; can't delete before
    }

    // Special case: if the head node is the one before the value
    if (head->next->data == value) {
        Node* temp = head; // Save head to delete later
        head = head->next; // Move head to the next node
        delete temp; // Free memory of the old head
        return head; // Return the new head
    }

    Node* temp = head;
    Node* previous = nullptr;

    while (temp != NULL && temp->next != NULL) {
        // If the next node's data matches the value
        if (temp->next->data == value) {
            Node* nodeToDelete = temp; // Node to delete
            temp->next = temp->next->next; // Bypass the node
            delete nodeToDelete; // Free memory of the deleted node
            return head; // Return the modified head
        }
        previous = temp; // Move previous to temp
        temp = temp->next; // Move temp to next
    }

    // If we reach here, the value was not found
    return head; // Return head unchanged
}


int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout << "Original List: " ;
    printLL(head);
  
    head = deleteBeforeValue(head,2);

    cout  << "\nafter change: ";
    printLL(head);

    return 0;
}