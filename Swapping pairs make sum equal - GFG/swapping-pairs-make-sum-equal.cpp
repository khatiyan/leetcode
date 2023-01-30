//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        // Your code goes here
         int Asum=0, Bsum=0;
       
       for(int i=0 ; i< n ; i++ )
        Asum+=A[i];
        
       for(int i=0 ; i< m ; i++ )
        Bsum+=B[i]; 
       
       if(Asum==Bsum) return 1;
       
       if((Asum+Bsum)&1) return -1; 
       
       sort(A, A+n), sort(B, B+m);
       
       int diff=(Asum-Bsum)/2;
       
       int i=0, j=0;
       
       while(i<n && j<m)
        {
            if(diff==A[i]-B[j])
          {
              return 1;
          }
          else if(diff > A[i]-B[j])
          i++;
          else 
          j++;
        }
        return -1;
	}
 

};

//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}






// } Driver Code Ends