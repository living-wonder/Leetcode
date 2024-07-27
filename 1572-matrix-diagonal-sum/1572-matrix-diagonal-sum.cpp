class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
          int sub=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
              if(i==j || i+j==n-1){
                  sub = sub + mat[i][j];
              }
                
                
            }
            
        }
     return sub;   
    }
};