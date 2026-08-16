bool isValid(vector<int>& position, int m, int ans){
    int lp = position[0];
    int balls = 1;
    for(int val: position){
        if(val - lp >= ans)
        {
            balls++;
            lp = val;
        }
    }
    return balls >= m;
}

class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(), position.end());
        int s = 1;
        int e = position[n-1] - position[0];
        int maxf = 0;
        while(s <= e){
            int mid = s + (e-s)/2;
            if(isValid(position, m, mid)){
                maxf = mid;
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }
        return maxf;       
    }
};