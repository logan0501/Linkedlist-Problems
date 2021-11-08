#include<bits/stdc++.h>
using namespace std;

// Link - https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1/?category[]=Linked%20List&category[]=Linked%20List&problemStatus=unsolved&difficulty[]=-1&difficulty[]=0&page=1&query=category[]Linked%20ListproblemStatusunsolveddifficulty[]-1difficulty[]0page1category[]Linked%20List

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
void deleteNode(Node *del)
{
       del->data=del->next->data;
       Node* temp = del->next;
       del->next=del->next->next;
       delete temp;
}
int main(){

    return 0;
}