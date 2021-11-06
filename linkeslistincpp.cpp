#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
void print(Node* head){
    Node* curr = head;
    while(curr!=NULL){
        cout<<curr->data<<endl;;
        curr=curr->next;
    }
}
Node* insert(Node*head,int x){
    Node* temp = new Node(x);
    if(head==NULL)return temp;
    Node* curr = head;
    while(curr->next)curr=curr->next;
    curr->next=temp;
    return head;
}
bool search(Node* head,int x){
    Node* curr = head;
    while(curr){
        if(curr->data==x)return 1;
        curr=curr->next;
    }
    return 0;
}
int main(){
    Node* head = new Node(1);
    head = insert(head,2);
    head = insert(head,3);
    head = insert(head,4);

    print(head);
    cout<<search(head,-7);
    return 0;
}