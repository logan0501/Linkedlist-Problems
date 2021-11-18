#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* prev;
    Node*next;
    Node(int x){
        data=x;
        prev=NULL;
        next=NULL;
    }
};
Node *insertAtBegin(Node* head,int data){
    Node* temp = new Node(data);
    temp->next=head;
    if(head)head->prev=temp;
    return temp;
    
}
int main(){
    return 0;
}