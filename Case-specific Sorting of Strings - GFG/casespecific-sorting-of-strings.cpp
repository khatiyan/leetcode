//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string s, int n)
    {
        // your code here
          string upper, lower;

    for (int i = 0; i < n; i++) {

        if (isupper(s[i])) {

            upper += s[i];

        } else {

            lower += s[i];

        }

    }

    sort(upper.begin(), upper.end());

    sort(lower.begin(), lower.end());

    int u = 0, l = 0;

    for (int i = 0; i < n; i++) {

        if (isupper(s[i])) {

            s[i] = upper[u++];

        } else {

            s[i] = lower[l++];

        }

    }

    return s;
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
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends