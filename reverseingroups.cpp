#include<bits/stdc++.h>
using namespace std;
// Link - https://practice.geeksforgeeks.org/problems/reverse-array-in-groups0255/1
struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
void reverseInGroups(vector<long long>& arr, int n, int k){
       for(int i=0;i<n;i+=k){
     	int left=i;
     	int right = min(i+k-1,n-1);
     	while(left<right)swap(arr[left++],arr[right--]);
}
}
int main(){

    return 0;
}