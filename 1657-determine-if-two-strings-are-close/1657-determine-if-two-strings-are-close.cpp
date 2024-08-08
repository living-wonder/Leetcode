class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word2.size()!=word1.size()) return false;
       unordered_map<char ,int> mp1;
        unordered_map<char ,int> mp2;
        
        sort(word1.begin(),word1.end());
        sort(word2.begin(),word2.end());
        if(word1==word2) return true;
        
        
       for(int i=0;i<word1.size();i++){
           mp1[word1[i]]++;
           mp2[word2[i]]++;
           
       }
        auto it1 = mp1.begin();
        auto it2 = mp2.begin();
        
        while(it1!=mp1.end()&&it2!=mp2.end()){
            if(it1->first!=it2->first) return false;
            
            it1++;
            it2++;
        }
        
        
        
        vector<int>temp1;
    for(auto pair:mp1){
        cout<<pair.second;
        temp1.push_back(pair.second);
    }
         vector<int>temp2;
    for(auto pair:mp2){
        cout<<pair.second;
        temp2.push_back(pair.second);
    }
   sort(temp1.begin(),temp1.end());
   sort(temp2.begin(),temp2.end());
        
        
        
        
     for(int i=0;i<temp1.size();i++){
         if(temp1[i]!=temp2[i]) return false;
     }   
             
        
        
       return true; 
    }
};