class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans;
        int i = n - 1;
        while(i >= 0){
            while(i >= 0 && s[i] == ' ' ) i--;
            int j = i;
            if(i < 0)
                break;
            while(i >= 0 && s[i] != ' ') i--;
            int k = i + 1;
            while(k <= j){
                ans.push_back(s[k]);
                k++;
            }
            ans.push_back(' ');
            i--;
        }
        ans.pop_back();
        return ans;
    }
};