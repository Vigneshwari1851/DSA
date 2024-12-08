// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

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

Node* removek(Node* head, int k){
    if(head==NULL){
        return head;
    }
    
    if(k==1){
        head=head->next;
        return head;
    }
    
    Node* temp = head;
    Node* prev = NULL;
    int count = 0 ;
    while(temp!=NULL){
        count++;
        if(count==k){
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
    head= removek(head,7);
    printLL(head);

    return 0;
}