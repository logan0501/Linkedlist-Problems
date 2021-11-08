#include<bits/stdc++.h>
using namespace std;
// Link - https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1
struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
int getMiddle(Node *head)
    {
        Node *p=head,*q=head;
        while(p && p->next){
            q=q->next;
            p=p->next->next;
        }
        return q->data;
    }
int main(){

    return 0;
}