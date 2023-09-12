class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n = arr.size();
        int cnt = 0;
        int k=0;
        for(int i=0; i<n; i++){
            if(arr[i] == 0){
                cnt++;
                continue;
            } 
            else{
                arr[k++] = arr[i];
            }
        }
        while(k < n) arr[k++] = 0;
    }
};