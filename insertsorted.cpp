#include<bits/stdc++.h>
using namespace std;
// Link - https://practice.geeksforgeeks.org/problems/insert-in-a-sorted-list/1
struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
Node *sortedInsert(struct Node* head, int data) {
    Node* temp = new Node(data);
    if(head==NULL)return temp;
    if(head->data>data){
        temp->next=head;
        return temp;
    }
    Node* curr =head;
    while(curr->next && curr->next->data<data)curr=curr->next;
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
int main(){

    return 0;
}