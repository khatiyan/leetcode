//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    long long int MissingNo(vector<vector<int> >& matrix) {
        // Code here
                int n = matrix.size();

        

        long long int sum1=0LL;

        long long int desired = 0LL;

        long long int i1,j1;

        vector<long long int> row(n),col(n);

        for(int i=0;i<n;i++)

        {

            long long int ct = 0LL;

            for(int j=0;j<n;j++)

            {

                ct+=matrix[i][j];

                if(matrix[i][j]==0)

                {

                i1=i,j1=j;

                }

            }

            row[i] = ct;

        }

        

        for(int j=0;j<n;j++)

        {

            long long int ct = 0LL;

            for(int i=0;i<n;i++)

            {

                ct+=matrix[i][j];

                

            }

            col[j] = ct;

        }

        if(i1==0) 

        {

            desired = row[1]-row[0];

            sum1=row[1];

        }

        else

        {

            desired = row[0]-row[i1];

            sum1 = row[0];

        }

        row[i1]+=desired;

        col[j1]+=desired;

        

        for(int i=0;i<n;i++)

        {

            if(row[i]!=sum1)

            return -1;

        }

        

        for(int j=0;j<n;j++)

        {

            if(col[j]!=sum1)

            return -1;

        }

       // cout<<sum1<<" "<<desired<<endl;

        long long int ct1=0LL,ct2=0LL;

        for(int i=0;i<n;i++)

        {

            for(int j=0;j<n;j++)

            {

                if(i==j)

                ct1+=matrix[i][j];

                if(j==n-1-i)

                ct2+=matrix[i][j];

            }

        }

        if(i1==j1) ct1+=desired;

        if(j1==n-1-i1) ct2+=desired;

       // cout<<ct1<<" "<<ct2<<endl;

        if(ct1!=sum1 || ct2!=sum1 || desired<=0)

        return -1;

        return desired;


    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		long long int ans = ob.MissingNo(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends