class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
       vector<vector<int>> temp;
        int i =0;
        int n = intervals.size();
        int start = newInterval[0];
        int end = newInterval[1];
        while(i<n && start > intervals[i][1]){
            temp.push_back(intervals[i]);
            i++;
            
        }
         while(i<n && newInterval[1] >=intervals[i][0]){
           newInterval[0]=min(newInterval[0],intervals[i][0]);
           newInterval[1]=max(newInterval[1],intervals[i][1]);
           i++;
             
            
        }
         temp.push_back(newInterval);
          while(i<n){
            temp.push_back(intervals[i]);
            i++;
            
    }
        
        
            
        return temp;
    }
};