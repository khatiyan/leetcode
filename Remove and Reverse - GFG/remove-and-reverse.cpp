//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
   string removeReverse(string str) {
        // code here
        using ll = long;
        ll ar[124] = {0}, i, j, n = str.length();
        for(auto x : str){
            ar[x]++;
        }
        
        i = 0;
        j = n-1;
        int fl = 0;
        while(i < j){
            if(fl == 0){
                if(ar[str[i]] > 1){
                    ar[str[i]]--;
                    str.erase(str.begin()+i);
                    fl = 1;
                }else{
                    i++;
                }
            }
            else{
                if(ar[str[j]] > 1){
                    ar[str[j]]--;
                    str.erase(str.begin()+j);
                    fl = 0;
                }else{
                    j--;
                }
            }
        }
        if(fl){
            reverse(str.begin(), str.end());
        }
        return str;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends