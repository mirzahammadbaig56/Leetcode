class Solution {
public:
    bool judgeSquareSum(int c) {
       int i = 0, j = sqrt(c);
        while(i<=j){
            long long ans = 1LL*i*i + j*j*1LL;
            if(ans == c) return true;
            if(ans > c) j--;
            else i++;
        }
        return false;
    }
};