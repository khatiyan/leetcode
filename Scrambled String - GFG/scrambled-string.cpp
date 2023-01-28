//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//Back-end complete function Template for C++

class Solution{
    public:
    
    bool solve(string a, string b, unordered_map<string, int>& dp)
    {
        if(a == b) // string matched
            return true;
        
        if(a.size() <= 1) // can't do check now
            return false;
        
        string temp = a + "$" + b;
        
        if(dp.count(temp))
            return dp[temp];
        
        int n = a.size();
        
        // now partition will take place for i = 1 to n - 1
        // and have to check two cases, 
        // i) whether to swap it
        // ii) whether not to swap it
        
        for(int i = 1; i <= n - 1; i++)
        {
            // case 1) swap two non leaf nodes
            if((solve(a.substr(0, i), b.substr(n - i, i), dp)) && 
               (solve(a.substr(i, n - i), b.substr(0, n - i), dp)))
            {
                return dp[temp] = true;
            }
            
            // case 2) not swap two nonn leaf nodes
            if((solve(a.substr(0, i), b.substr(0, i), dp)) &&
              (solve(a.substr(i, n - i), b.substr(i, n - i), dp)))
            {
                return dp[temp] = true;
            }
        }
        
        return dp[temp] = false;
    }
    
    bool isScramble(string s1, string s2){
        //code here
        if(s1 == s2)
            return true;
        
        if(s1.size() != s2.size())
            return false;
        
        unordered_map<string,int> dp;
        
        return solve(s1, s2, dp);
    }    
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        string S1, S2;
        cin>>S1>>S2;
        Solution ob;
        
        if (ob.isScramble(S1, S2)) {
            cout << "Yes";
        }
        else {
            cout << "No";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends