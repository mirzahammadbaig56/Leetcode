class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length(), m = s2.length();
        if(n > m) return false;
        vector<int> freq(26, 0);
        for(int i = 0; i < n; i++){
            freq[s1[i] - 'a']++;
        }
        for(int i = 0; i < m - n + 1; i++){
            vector<int> slFreq(26, 0);
            for(int j = i; j < i + n; j++){
                slFreq[s2[j] - 'a']++;
            }
            if(freq == slFreq) return true;
        }
        return false;
    }
};