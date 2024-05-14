class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>>mp;
        for(auto s:strs){
            string temp = s;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(s);
        }
        vector<vector<string>>anagram;
            for(auto i:mp){
                anagram.push_back(i.second);
            }
        return anagram;
    }
};