class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int size = coordinates.size();
        for(int i=0;i<size-2;i++){
           int  y0=coordinates[i+1][1]-coordinates[i][1];
           int  x0=coordinates[i+2][0]-coordinates[i+1][0];
           int  y1=coordinates[i+2][1]-coordinates[i+1][1];
           int x1=coordinates[i+1][0]-coordinates[i][0];
           if(x0 * y0 != x1 * y1){
               return false;
           }
            
        }
      return true;  
    }
};