class Solution {
public:
    int compress(vector<char>& chars) {
        string s;
        int i = 0, j = chars.size();
        while(i < j){
            int l = 1;
            while(i < j - 1 && chars[i] == chars[i + 1]){ 
                i++;
                l++;    
            }
            s.push_back(chars[i]);
            if(l > 1){
                s.append(to_string(l));
            }
            i++;
        }
        chars.clear();
        for(int i = 0; i < s.length(); i++){
            chars.push_back(s[i]);
        }
        return chars.size();
    }
};