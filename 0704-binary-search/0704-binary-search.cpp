class Solution {
public:
    int binarySearch(vector<int>& nums, int target, int start, int end){
        if(start <= end){
            int mid = start + (end - start)/2;
            if(nums[mid] == target) return mid;
            if(nums[mid] < target) return binarySearch(nums, target, mid + 1, end);
            else return binarySearch(nums, target, start, mid - 1);
        }
        else return -1;
    }
    int search(vector<int>& nums, int target) {
        int st = 0, en = nums.size() - 1;
        return binarySearch(nums, target, st, en);
    }
};