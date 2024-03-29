//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> solveQueries(int N, int num, vector<int> &A, vector<vector<int>> &Q) {
        // code here
         vector<int>ans;

        vector<int>dp(N);

        for(int i = N-1;i >=0 ;i--){

            int f = 0;

           for(int j = i ; j<N;j++){

                if(A[j] == A[i]) f++;

           }

           dp[i] = f;

        }

        for(int i = 0 ;i < num;i++){

             int L = Q[i][0];

             int R = Q[i][1];

             int K = Q[i][2];

             int f = 0;

             for(int j = L ; j<=R ;j++){

                  if(dp[j] == K) f++;

             }

             ans.push_back(f);

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
        int num;
        cin>>num;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        vector<vector<int>> Q(num, vector<int>(3));
        for(int i=0;i<num;i++){
            for(int j=0;j<3;j++){
                cin>>Q[i][j];
            }
        }
        Solution obj;
        vector<int> res = obj.solveQueries(N, num, A, Q);
        
        for(auto ele:res){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}

// } Driver Code Ends