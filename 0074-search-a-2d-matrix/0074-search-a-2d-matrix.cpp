class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int startRow = 0, endRow = m - 1;
        while(startRow <= endRow){
            int midRow = startRow + (endRow - startRow)/2;
            if(target >= matrix[midRow][0] && target <= matrix[midRow][n-1]){
                int startCol = 0, endCol = n - 1;
                while(startCol <= endCol){
                    int midCol = startCol + (endCol - startCol)/2;
                    if(matrix[midRow][midCol] == target) return true;
                    if(matrix[midRow][midCol] > target) endCol = midCol - 1;
                    else startCol = midCol + 1;
                }
                return false;
            }
            else if(target > matrix[midRow][n - 1]) startRow = midRow + 1;
            else endRow = midRow - 1;
        }   
        return false;
    }
};