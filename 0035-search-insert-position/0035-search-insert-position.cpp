class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n= nums.size(),
        s = 0, e = n-1;
        while(s<=e){
            int m = s+(e-s)/2;
            if(nums[m] == target){
                return m;
            }
            if(nums[m] > target){
                e = m - 1;
            }
            else {
                s = m +1;
            }
        }
        return s;
    }
};