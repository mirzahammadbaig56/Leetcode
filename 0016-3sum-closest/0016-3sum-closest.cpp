class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int closest;
        closest = nums[0] + nums[1] + nums[2];
        int i = 0;
        while(i < n-2){
            int j = i + 1, k = n - 1;
            while(j < k){
                int s = nums[i] + nums[j] + nums[k];
                if(abs(s - target) < abs(closest - target))
                    closest = s;
                if(s > target){
                    k--;
                    while(k > j && nums[k] == nums[k + 1]) k--;
                }
                else if(s < target) {
                    j++;
                    while(j < k && nums[j] == nums[j - 1]) j++;
                }
                else return s;
            } 
            i++;
            while(i < n - 2 && nums[i] == nums[i - 1]) i++;
        }
        return closest;
    }
};