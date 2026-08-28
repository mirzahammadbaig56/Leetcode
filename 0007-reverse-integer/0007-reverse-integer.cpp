class Solution {
public:
    int reverse(int x) {
        int reverse = 0;
        while(x != 0){
            if(reverse > INT_MAX/10)
                return 0;
            if(reverse == INT_MAX/10 && x % 10 > 7)
                return 0;
            if(reverse < INT_MIN/10)
                return 0;
            if(reverse == INT_MIN/10 && x % 10 < -8)
                return 0;

            reverse = (reverse * 10) + (x % 10);
            x /= 10;
        }
        return reverse;
    }
};