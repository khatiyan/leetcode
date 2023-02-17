//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int N, int K, vector<long long> GeekNum) {
        // code here
         if(N<GeekNum.size())

        return(GeekNum[N-1]);

        int i=GeekNum.size();

        while(i<N){

            GeekNum.push_back(0);

            int j=1;

            while(j<=K){

                GeekNum[i]+=GeekNum[i-j];

                j++;

                

            }

            i++;

        }

        return GeekNum[N-1];
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends