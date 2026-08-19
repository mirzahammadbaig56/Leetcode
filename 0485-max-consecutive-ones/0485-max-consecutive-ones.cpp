class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max1s = 0, curr = 0;
        for(int val: nums){
            if(val == 1){
                curr++;
                max1s = max(max1s, curr);
            } else curr = 0;
        }
        return max1s;
    }
};