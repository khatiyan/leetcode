//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
     bool isSafe(int i,int j,int n,int m){
      if(i<0 || j<0 || i>=n || j>=m){
          return false;
      }
      return true;
    }

    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,pair<int, int> destination) {
        
        if(source==destination){
            return 0;
        }
        
        int n=grid.size();
        
        int m =grid[0].size();
        
        queue<pair<pair<int,int>,int>>q;
        
        q.push({source,0});
        
        grid[source.first][source.second]=0;
        
        while(!q.empty()){
            
            int t = q.size();
            
            while(t--){
                
                int row = q.front().first.first;
                
                int col = q.front().first.second;
                
                int dis = q.front().second;
                
                q.pop();
                
                if(row==destination.first && col==destination.second){
                    return dis;
                }
                
                if(isSafe(row+1,col,n,m) && grid[row+1][col]==1){
                    q.push({{row+1,col},dis+1});
                    grid[row+1][col]=0;
                }
                if(isSafe(row-1,col,n,m) && grid[row-1][col]==1){
                    q.push({{row-1,col},dis+1});
                    grid[row-1][col]=0;
                }
                if(isSafe(row,col+1,n,m) && grid[row][col+1]==1){
                    q.push({{row,col+1},dis+1});
                    grid[row][col+1]=0;
                }
                if(isSafe(row,col-1,n,m) && grid[row][col-1]==1){
                    q.push({{row,col-1},dis+1});
                    grid[row][col-1]=0;
                }
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends