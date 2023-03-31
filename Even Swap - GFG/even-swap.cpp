//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        vector <int> lexicographicallyLargest(vector <int> &arr,int n)
        {
            // Code here
            int start=0,end=0;
            int odd=0;
            int even=0;
            while(end<n)
            {
                if(arr[end]%2==0)
                {
                    even++;
                }
                else
                {
                    odd++ ;
                }
                if((even==end-start+1 && odd==0) || (even==0 && odd==end-start+1))
                {
                    // move ahead 
                }
                else
                {
                    sort(arr.begin()+start,arr.begin()+end,greater<int>());
                    start=end;
                    odd=0;
                    even=0;
                
                        if(arr[end]%2==0)
                    {
                        even++;
                    }
                    else
                    {
                        odd++ ;
                    }
                }   
                end++ ;
            }
            
            if((even==end-start && odd==0) || (even==0 && odd==end-start))
                {
                     sort(arr.begin()+start,arr.begin()+end,greater<int>());
                }
            return arr;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> a(n);
        for(auto &j:a)
            cin>>j;
        Solution s;
        vector <int> b=s.lexicographicallyLargest(a,n);
        for(auto i:b)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends