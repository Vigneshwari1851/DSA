// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

// input : arr = {12,5,8,7};
// output: 12 8 7 

class Node{
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
        temp = temp->next;
    }
}

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
        
    }
    return head;
}

Node* removeValue(Node* head, int k){
    if(head==NULL){
        return head;
    }
    
    if(head->data == k){
        head=head->next;
        return head;
    }
    
    Node* temp = head;
    Node* prev = NULL;
    
    while(temp!=NULL){
        
        if(temp->data == k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp=temp->next;
    }
    return head;
}

int main() {
    vector<int> arr = {12,5,8,7};
    Node* head = convertArr2LL(arr);
    head= removeValue(head,5);
    printLL(head);

    return 0;
}