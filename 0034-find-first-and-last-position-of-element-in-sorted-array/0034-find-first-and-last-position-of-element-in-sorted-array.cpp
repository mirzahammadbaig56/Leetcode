class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
        if(nums.size() == 0) return ans;
        int s = 0, e = nums.size() - 1;
        while(s <= e){
            int m = s + (e - s)/2;
            if(nums[m] == target){
                ans[0] = m;
                e = m - 1;
            }
            else if(nums[m] > target) 
                e = m - 1;
            else 
                s = m + 1;
        }
        s = 0, e = nums.size() - 1;
        while(s <= e){
            int m = s + (e - s)/2;
            if(nums[m] == target){
                ans[1] = m;
                s = m + 1;
            }
            else if(nums[m] > target) 
                e = m - 1;
            else 
                s = m + 1;
        }
        return ans;
    }
};