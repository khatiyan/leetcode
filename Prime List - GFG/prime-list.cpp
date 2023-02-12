//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};


// } Driver Code Ends
//User function Template for C++

/*

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};

*/

class Solution{
public:
bool isprime(int n ){

        if(n==1){

            return false;

            

        }

        if(n==2 || n==3){

            return true;

        }

        for(int i=2;i*i<=n;i++){

            if(n%i==0){

                return false;

            }

        }

        return true;

    }

    Node *primeList(Node *head){

        Node *curr=head;

        while(curr!=NULL){

            if(curr->val==1){

                curr->val=2;

                curr=curr->next;

                continue;

            }

            int x=curr->val;

            int y=curr->val;

            while(!isprime(x)){

                x--;

            }

            while(!isprime(y)){

                y++;

                

            }

            if(curr->val-x > y-curr->val){

                curr->val=y;

            }

            else{

                curr->val=x;

                curr=curr->next;

            }

        }

        return head;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Node *head,*tail;
        int num;
        cin>>num;
        head=tail=new Node(num);
        for(int i=0;i<n-1;i++){
            int num;
            cin>>num;
            tail->next=new Node(num);
            tail=tail->next;
        }
        Solution ob;
        Node *temp=ob.primeList(head);
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends