#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
//using hashing
void removeLoop1(Node* head)
{
    if(head==NULL || head->next==NULL)return;
    Node* curr=head;
    unordered_set<Node *> uset;
    while(curr->next && curr  && uset.find(curr->next)==uset.end()){
        uset.insert(curr);
        curr=curr->next;
    }
    if(curr->next){
        curr->next=NULL;
    }
}
void removeLoop(Node* head)
{
    Node* slow=head,*fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)break;
    }
    if(slow!=fast)return;
    slow=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    fast->next=NULL;
}
int main(){

    return 0;
}