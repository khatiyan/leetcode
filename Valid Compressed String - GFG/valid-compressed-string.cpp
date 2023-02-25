//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkCompressed(string S, string T) {
        // code here
         int i=0,j=0;

         int n=S.size(), m=T.size();

         while(i<n &&j<m)

         {

             if(S[i]==T[j])

             {

                 i++;

                 j++;

             }

             else if(isdigit(T[j]))

             {

                 string str;

                 while(isdigit(T[j]))

                 {

                     str.push_back(T[j]);

                     j++;

                 }

                 int num=stoi(str);

                 i+=num;

             }

             else if(S[i]!=T[j])

             {

                 return 0;

             }

         }

         if(i==n && j==m)

         {

             return 1;

         }

         return 0;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        
        cin>>S>>T;

        Solution ob;
        cout << ob.checkCompressed(S,T) << endl;
    }
    return 0;
}
// } Driver Code Ends