class Solution {
public:
    bool checkDivisibility(int n) {
        long long digitSum = 0;
        long long digitProduct = 1LL;
        int original = n;
        while(n > 0){
            digitSum += n%10;
            digitProduct *= n%10;
            n /= 10;
        }
        long long sum = digitSum + digitProduct;
        if(original % sum == 0) return true;
        else return false;
    }
};