class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int n = t.size();
        char result;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<s.size();i++){
            if(s[i]!=t[i]){
                return t[i];
            }
         }
      return t[n-1];
        
    }
};