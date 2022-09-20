class Solution {
    public:
      int fun(vector<int>& nums1, vector<int>& nums2,int m,int n,int &count){
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0 || j==0)
                    dp[i][j]=0;
                else if(nums1[i-1]==nums2[j-1]){
                    dp[i][j]=dp[i-1][j-1] + 1;
                    count=max(count,dp[i][j]);
                }
                else{
                    dp[i][j]=0;
                }
            }
        }  
        return count;
    }
    
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int count = 0;
        return fun(nums1,nums2,nums1.size(),nums2.size(),count);
    }
};