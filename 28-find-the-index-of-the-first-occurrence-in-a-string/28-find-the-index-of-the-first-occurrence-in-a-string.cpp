class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.length();
        int n = needle.length();
        
        int idx = -1;
        int t = 0;
        for(int i=0;i<m;i++)
        {
            if(haystack[i] == needle[0])
            {
                t = i;
                idx = i;
                for(int j=0;j<n;j++)
                {
                    if(haystack[t] == needle[j])
                    {
                        t++;
                        if(j == n-1) return idx;
                    }
                    else{
                        idx = -1;
                        break;
                    }
                }
            }
        }
        return idx;
        
    }
};