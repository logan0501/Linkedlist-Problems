#include<bits/stdc++.h>
using namespace std;
// Link - https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1#
struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
struct Node* reverseList(struct Node *head)
{
    Node* curr=head;
    Node * prev=NULL;
    while(curr){
        Node *next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
int main(){

    return 0;
}