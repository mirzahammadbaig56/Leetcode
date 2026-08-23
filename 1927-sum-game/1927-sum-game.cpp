class Solution {
public:
    bool sumGame(string num) {
        int n = num.length();
        int leftSum = 0, rightSum = 0, q1 = 0, q2 = 0;
        for(int i = 0; i < n/2; i++){
            num[i] == '?' ? q1++: leftSum += num[i] - '0';
        }
        for(int i = n/2; i < n; i++){
            num[i] == '?' ? q2++: rightSum += num[i] - '0';
        }
        int diff = leftSum - rightSum;
        if((q1+q2) & 1) return true;
        return diff != (q2-q1)*9/2; 
    }
};