//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minLaptops(int n, int a[], int b[]) {
       
    sort(a,a+n);
    sort(b,b+n);
    int i=1,j=0;
    
    int pl=1;
    while(i< n && j<n)
    {
        if(a[i]<b[j])
        {
           pl++;
           //i++;
        }
        else
        {
           
            j++;
        }
        i++;
        
    }
    return pl;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int start[N], end[N];
        for(int i=0; i<N; i++)
            cin>>start[i];
        for(int i=0; i<N; i++)
            cin>>end[i];
            
        Solution ob;
        cout << ob.minLaptops(N, start, end) << endl;
    }
}
// } Driver Code Ends