//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string str) {
    // Write your code here.
     int n=str.size();
    int as=0;
    int bs=0;
    for(int i=0;i<n;){
        if(str[i]=='a'){
            while(i<n && str[i]=='a'){
                i++;
            }
            as++;
        }
        else{
            while(i<n && str[i]=='b'){
                i++;
            }
            bs++;
        }
        
    }
    return min(as,bs)+1;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends