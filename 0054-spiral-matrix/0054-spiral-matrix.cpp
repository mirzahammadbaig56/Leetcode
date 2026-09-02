class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> ans;
        int sCol = 0, eCol = n - 1, sRow = 0, eRow = m - 1;
        while(sCol <= eCol && sRow <= eRow){
            for(int i = sCol; i <= eCol; i++){
                ans.push_back(matrix[sRow][i]);
            }
            for(int i = sRow + 1; i <= eRow; i++){
                ans.push_back(matrix[i][eCol]);
            }
            for(int i = eCol - 1; i >= sCol; i--){
                if(sRow == eRow) break;
                ans.push_back(matrix[eRow][i]);
            }
            for(int i = eRow - 1; i >= sRow + 1; i--){
                if(sCol == eCol) break;
                ans.push_back(matrix[i][sCol]);
            }
            sRow++;
            eRow--;
            sCol++;
            eCol--;
        }
        return ans;
    }
};