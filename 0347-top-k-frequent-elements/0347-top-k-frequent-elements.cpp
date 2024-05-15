#include <algorithm>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector <int>>res;
        map<int ,int>mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
          }
                          
        for(auto p:mp){
            res.push_back({p.second,p.first});
        }   
        vector<int>temp;
       sort(res.begin(), res.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] > b[0]; // Compare frequencies in descending order
        });
        for(int i=0;i<k;i++){
            temp.push_back(res[i][1]);
        }
        
                          
        return temp;
    }
};