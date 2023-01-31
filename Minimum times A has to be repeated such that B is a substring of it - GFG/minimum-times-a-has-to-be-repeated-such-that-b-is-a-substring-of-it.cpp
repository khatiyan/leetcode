//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
 int minRepeats(string A, string B) {

        // code here
 int q = (B.length() - 1) / A.length() + 1;
    string t = "";
    for (int i = 0; i < q; i++) t += A;
    if (t.find(B) != string::npos) return q;
    t += A;
    if (t.find(B) != string::npos) return q + 1;
    return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ",&t);
    while (t--) {
        string A,B;
        getline(cin,A);
        getline(cin,B);

        Solution ob;
        cout << ob.minRepeats(A,B) << endl;
    }
    return 0;
}
// } Driver Code Ends