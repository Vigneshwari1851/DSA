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


Node* insertAtHead(Node* head , int val){
    Node* temp = new Node(val, head);
    return temp;
}

Node* insertAtK(Node* head , int ele, int k){
    if(head == NULL){ //checks the list is empty
        if(k == 1){
            return  new Node(ele);
        }else{
            return head;
        }
    }
    if(k==1){
        return new Node(ele,head);
    }
    
    int c = 0;
    Node* temp = head;
    while(temp!= NULL){
        c++;
        if(c ==  (k-1)){
            Node* x = new Node(ele,temp->next);
            temp->next = x ;
            break;
        }
        temp = temp->next;
    }
    if (temp == NULL) {
        Node* last = head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = new Node(ele);
    }
    return head;
}
int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout << "Original List: ";
    printLL(head);

    int k = 5;  
    int ele = 10;  
    head = insertAtK(head, ele, k);

    cout << "\nAfter inserting " << ele << " at position " << k << ": ";
    printLL(head);

    return 0;
}