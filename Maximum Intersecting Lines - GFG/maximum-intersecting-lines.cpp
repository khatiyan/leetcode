//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
 bool compare(pair<int, int>& a, pair<int, int>& b) {
    return a.second < b.second;
}

int maxIntersections(vector<vector<int>>& lines, int n) {
    vector<pair<int, int>> points; // store all endpoints of line segments
    for(int i = 0; i < n; i++) {
        points.push_back({lines[i][0], 0});
        points.push_back({lines[i][1], 1});
    }
    sort(points.begin(), points.end()); // sort endpoints by x-coordinate
    int count = 0, max_count = 0;
    for(int i = 0; i < 2*n; i++) {
        if(points[i].second == 0) count++; // increment count for left endpoint
        else count--; // decrement count for right endpoint
        max_count = max(max_count, count); // update max_count
    }
    return max_count;
  }

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> mat(N, vector<int>(2));
        for (int j = 0; j < 2; j++) {
            for (int i = 0; i < N; i++) {
                cin >> mat[i][j];
            }
        }
        Solution obj;
        cout << obj.maxIntersections(mat, N) << endl;
    }
}
// } Driver Code Ends