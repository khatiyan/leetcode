class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int count=1;
        int temp=arr[0];
        vector<int> vec;
        for(int i=1;i<arr.size();i++){
           if(temp == arr[i])
               count++;
            else{
                if( find(vec.begin(), vec.end(), count) != vec.end() )
                    return false;
                else{
                    vec.push_back(count);
                    count = 1;
                    temp = arr[i];
                }
            }
        }
        if( find(vec.begin(), vec.end(), count) != vec.end() ) return false;
        return true;
   }
};