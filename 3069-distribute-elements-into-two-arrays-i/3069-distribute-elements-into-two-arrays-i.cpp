class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1, arr2, ans(nums.size());
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int n = 2;
        while(n < nums.size()){
            if(arr1.back() > arr2.back()){
                arr1.push_back(nums[n++]);
            }
            else {
                arr2.push_back(nums[n++]);
            }
        }
        int k = 0;
        for(int i = 0; i < arr1.size(); i++){
            ans[k++] = arr1[i];
        }
        for(int i = 0; i < arr2.size(); i++){
            ans[k++] = arr2[i];
        }
        return ans;
    }
};