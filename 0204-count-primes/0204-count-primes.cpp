class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2) return 0;
        int count = 1;
        vector<bool> isPrime(n+1, true);
        for(int i = 3; i < n; i+=2){
            if(isPrime[i]){
                count++;
                if(1LL*i*i < n){
                    for(long long j = i * i; j < n; j+=i*2){
                        isPrime[j] = false;
                    }
                }
            }
        }
        return count;
    }
};