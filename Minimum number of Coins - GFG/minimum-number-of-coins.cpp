//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int N)
    {
        // code here
         priority_queue<int>pq;
        pq.push(1);
        pq.push(2);
        pq.push(5);
        pq.push(10);
        pq.push(20);
        pq.push(50);
        pq.push(100);
        pq.push(200);
        pq.push(500);
        pq.push(2000);
        vector<int> ans;
        
        while(N)
        {
            while(pq.top()>N)
            {
                pq.pop();
            }
            ans.push_back(pq.top());
            N= N-pq.top();
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends