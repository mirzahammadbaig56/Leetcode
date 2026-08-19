class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans(2);
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int sum = nums[0];
        for(int i = 1; i < n; i++){
            if(nums[i] == nums[i - 1]){
                ans[0] = nums[i];
            }
            sum += nums[i];
        }
        int Total = (n*(n+1))/2;
        int missing = Total - (sum - ans[0]);
        ans[1] = missing;
        return ans;
    }
};