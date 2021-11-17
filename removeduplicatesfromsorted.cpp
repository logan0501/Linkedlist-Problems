#include<bits/stdc++.h>
using namespace std;
// Link - https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
    Node* curr=head;
   
    while(curr && curr->next){
        if(curr->data==curr->next->data){
            Node *temp = curr->next;
            curr->next=curr->next->next;
            delete temp;
        }else{
            curr=curr->next;
        }
    }
    return head;
}
int main(){

    return 0;
}