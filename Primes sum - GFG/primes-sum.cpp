//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
bool is_prime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
        return false;
    }
    return true;
}
    string isSumOfTwo(int N){
        // code here
        // vector<int>ans;
        // for(int i=2;i<N;i++){
        //     if(isprime(i)){
        //         ans.push_back(i);
        //     }
        // }
        // int j=ans.size();
        // int i=0;
        // while(i<j){
        //   // int sum=;
        //     if((ans[i]+ans[j])==N){
        //         return "yes";
        //     }
        //   else if((ans[i]+ans[j])>N){
        //       cout<<(ans[i]+ans[j])<<endl;
        //       j--;
        //   }
        //   else{
        //       //cout<<(ans[i]+ans[j])<<endl;
        //       i++;
        //   }
        // }
        // return "No";
             for(int i=2;i<=N/2;i++){

            if(is_prime(i)){

                if(is_prime(N-i)){

                    return "Yes";

                }

            }

        }

        return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends