class Solution {
public:
    string toLowerCase(string s) {
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]>64 && s[i]<91){
                s[i]= s[i]+32;
            }
        }
        return s;
    }
};