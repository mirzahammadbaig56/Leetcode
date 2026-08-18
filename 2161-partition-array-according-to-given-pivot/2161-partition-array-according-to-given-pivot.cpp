class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> arr(n);
        int k = 0;
        for(int i = 0; i<n;i++){
            if(nums[i] < pivot){
                arr[k++] = nums[i];
            }
        }
        for(int i=0; i<n;i++){
            if(nums[i] == pivot){
                arr[k++] = nums[i];
            }
        }
        for(int i=0; i<n;i++){
            if(nums[i] > pivot){
                arr[k++] = nums[i];
            }
        }
        return arr;
    }
};