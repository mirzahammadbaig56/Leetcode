class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length(), m = s2.length();
        if(n > m) return false;
        vector<int> freq(26, 0);
        vector<int> slFreq(26, 0);
        for(int i = 0; i < n; i++){
            freq[s1[i] - 'a']++;
            slFreq[s2[i] - 'a']++;
        }
        if(freq == slFreq) return true;
        for(int i = n; i < m; i++){
            slFreq[s2[i - n] - 'a']--;
            slFreq[s2[i] - 'a']++;
            if(freq == slFreq) return true;
        }
        return false;
    }
};