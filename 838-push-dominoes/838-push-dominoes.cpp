class Solution {
public:
    string pushDominoes(string s) {
          int n=s.length(), cnt=1;
        vector<int> left(n), right(n);
        for(int i=0;i<n;i++) {
            if(s[i]=='R')
                cnt=1, right[i]=cnt++;
            else if((i==0 && s[i]=='.')||s[i]=='L')
                right[i]=0, cnt=1;
            else if(i!=0 && s[i]=='.' && right[i-1]!=0)
                right[i]=cnt++;
            else
                right[i]=0;
        }
        for(int i=n-1;i>=0;i--) {
            if(s[i]=='L')
                cnt=1, left[i]=cnt++;
            else if((i==n-1 && s[i]=='.')||s[i]=='R')
                left[i]=0, cnt=1;
            else if(i!=n-1 && s[i]=='.' && left[i+1]!=0)
                left[i]=cnt++;
            else
                left[i]=0;
        }
        string ans;
        for(int i=0;i<n;i++){
            if(left[i]!=0 && right[i]==0)
                ans+="L";
            else if(left[i]==0 && right[i]!=0)
                ans+="R";
            else if(left[i]==0 && right[i]==0)
                ans+=".";
            else {
                if(left[i]<right[i])
                    ans+="L";
                else if(right[i]<left[i])
                    ans+="R";
                else
                    ans+=".";
            }
        }
        return ans;
    }
};