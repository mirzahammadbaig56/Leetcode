class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        if(n < 4) return ans;
        for(int i = 0; i < n - 3; i++){
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            int j = i + 1;
            while(j < n-2){
                int k = j + 1, l = n - 1;
                while(k < l){
                    long long s = (long long)nums[i]+nums[j]+nums[k]+nums[l];
                    if(s == target){
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;
                        while(l > k && nums[l] == nums[l + 1]) l--;
                        while(k < l && nums[k] == nums[k - 1]) k++;
                    }
                    else if(s < target) {
                        k++;
                        while(k < l && nums[k] == nums[k - 1]) k++;
                    }
                    else {
                        l--;
                        while(l > k && nums[l] == nums[l + 1]) l--;
                    }
                }
                j++;
                while(j < n - 2 && nums[j] == nums[j-1]) j++;
            }
        }
        return ans;
    }
};