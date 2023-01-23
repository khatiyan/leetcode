//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removePair(string s)  {

        // code here

        stack<char>st;

        if(s.size()==0||s.size()==1)

         return s;

        st.push(s[0]);

        int n=s.size();

        for(int i=1;i<n;i++){

            if(st.size()>0&&st.top()==s[i]){

                st.pop();

            }

            else{

                st.push(s[i]);

            }

        }

        if(st.size()==0)

         return "-1";

         string str="";

         while(st.size()>0){

             str+=st.top();

             st.pop();

         }

         reverse(str.begin(),str.end());

         return str;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends