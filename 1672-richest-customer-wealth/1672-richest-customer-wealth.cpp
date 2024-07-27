class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int m = accounts[0].size();
        vector<int> total;
        int sub=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               sub=sub+accounts[i][j];
                
                
            }
            total.push_back(sub);
            sub=0;
        }
    int maxi = *max_element(total.begin(),total.end());
      return maxi;  
    }
};