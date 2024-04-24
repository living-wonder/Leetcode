class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int row=0;
        for(int i=0;i<m;i++){
            if(target>= matrix[i][0] && target<=matrix[i][n-1]){
                 row = i;
                
            }
        }
        for(int j=0;j<n;j++){
            if(matrix[row][j]==target){
                return true;
            }
            
        }
        return false;
    }
};