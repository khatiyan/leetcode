//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
   vector<long long> dp;
    long long t;
    bool makeJump(long long a) {
        if (a > t)
            return false;
        int prev = a % 10;
        if (prev != 9)
            if (!makeJump(a * 10 + prev + 1))
                dp.push_back(a);
        if (prev != 0)
            if (!makeJump(a * 10 + prev - 1))
                dp.push_back(a);
        return true;
    }
  public:
    long long jumpingNums(long long X) {
        // code here
        t = X;
        for (int i = 9; i > 0; i--)
            makeJump(i);
        long long res = dp[0];
        for (long long i = 1; i < dp.size(); i++)
            res = max(res, dp[i]);
        return res;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.jumpingNums(X) << endl;
    }
    return 0;
}
// } Driver Code Ends