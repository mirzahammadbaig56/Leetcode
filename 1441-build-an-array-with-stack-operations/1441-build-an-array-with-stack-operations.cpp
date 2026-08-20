class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        vector<int> freq(n + 1, 0);
        for(int val: target){
            freq[val]++;
        }
        for(int i = 1; i <= n && i <= target.back(); i++){
            ans.push_back("Push");
            if(freq[i] == 0){
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};