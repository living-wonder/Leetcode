class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        unordered_set<int> st;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto num:mp){
            st.insert(num.second);
        }
        
        
      return mp.size()==st.size();  
        
    }
};