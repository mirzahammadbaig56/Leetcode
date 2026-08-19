class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size() * 2;
        vector<int> newNums(n);
        int k = 0;
        for(int val: nums){
            newNums[k++] = val;
        }
        for(int val: nums){
            newNums[k++] = val;
        }
        return newNums;
    }
};