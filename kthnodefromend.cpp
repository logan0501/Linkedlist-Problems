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
int getNthFromLast(Node *head, int K)

{
    Node* fast=head;
    for(int i=0;i<K-1 && fast!=NULL;i++){
        fast=fast->next;
    }
    if(fast==NULL)return -1;
    Node *slow=head;
    while(fast){
        fast=fast->next;
        slow=slow->next;
    }
    return slow->data;
}

int main(){

    return 0;
}