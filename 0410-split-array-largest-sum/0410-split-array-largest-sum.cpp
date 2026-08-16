bool isValid(vector<int>& nums, int k, int m){
    int sa= 1; int lar = 0;
    for(int val: nums){
        if(lar + val <= m)
            lar += val;
        else{
            sa++;
            lar = val;
        }
    }
    if(sa <= k) return true;
    else return false;
}

class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        if(k > nums.size()) return -1;
        
        int sum =0;
        int maxe = nums[0];
        for(int val: nums){
            sum += val;
            if(val > maxe) maxe = max(maxe, val);
        }
        int s =maxe, e = sum;
        int ans = -1;
        while(s<=e){
            int m = s+(e-s)/2;
            if(isValid(nums, k, m)){
                ans = m;
                e = m-1;
            }else{
                s = m+1;
            }
        }
        return ans;
    }
};