class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans((2*n));
        int k = 0;
        int i = 0, j = n;
        while(i < n){
            ans[k++] = nums[i];
            ans[k++] = nums[j];
            i++;
            j++;
        }
        return ans;
    }
};