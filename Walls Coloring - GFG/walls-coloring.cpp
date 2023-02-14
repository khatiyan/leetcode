//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int minCost(vector<vector<int>> &colors, int N) {
        // Write your code here.
        vector<int> prev(3);

        vector<int> cur(3);

        

        prev[0] = colors[0][0];

        prev[1] = colors[0][1];

        prev[2] = colors[0][2];

        

        for(int i=1;i<N;i++)

        {

            cur[0] = min(prev[1],prev[2]) + colors[i][0];

            cur[1] = min(prev[0],prev[2]) + colors[i][1];

            cur[2] = min(prev[1],prev[0]) + colors[i][2];

            

            prev = cur;

        }

        

        return min({cur[0],cur[1],cur[2]});
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<vector<int>> colors(n, vector<int>(3));
        for (int i = 0; i < n; i++)
            cin >> colors[i][0] >> colors[i][1] >> colors[i][2];
            
        Solution ob;
        cout << ob.minCost(colors, n) << endl;    
    }
}
// } Driver Code Ends