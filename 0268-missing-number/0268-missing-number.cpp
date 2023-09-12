class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        int ans = n;
        int i = 0;
        for(auto it: arr){
           ans ^= it;
           ans ^= i;
           i++;
        }
        return ans;
        }
};