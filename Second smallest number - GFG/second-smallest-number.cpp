//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{   
  public:
    string secondSmallest(int S, int D){
        // code here 
        using ll = int;
        string str = string(D, '0');
        int sum = 0, dig = D;
        ll rem = S;
        int i, j;
        i = D-1;
        while(rem && i >= 0){
            if(rem > 9){
                rem = rem - 9;
                str[i] = '9';
                i--;
            }else{
                if(i > 0){
                    rem--;
                    str[0] = '1';
                }
                str[i] = (char)((rem+48));
                rem = 0;
                i--;
                break;
            }
        }
        
        if(str[0] == '9'){
            return "-1";
        }
        if(rem && i < 0){
            return "-1";
        }
        i = D-1;
        char ch = str[i];
        while(i >= 0 && str[i] == ch){
            i--;
        }
        str[i]+=1;
        str[i+1]-=1;
        return str;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.secondSmallest(S,D) << endl;
    }
    return 0; 
} 
// } Driver Code Ends