class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        int sum = n * (n + 1)/2;
        int tmp = 0;
        for(int i=0; i<n; i++){
            tmp += arr[i];
        }
        return sum - tmp;
    }
};