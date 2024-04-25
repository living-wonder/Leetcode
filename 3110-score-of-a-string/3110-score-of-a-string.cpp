class Solution {
public:
    int scoreOfString(string s) {
        int score=0;
        for(int i =0;i<s.length()-1;i++){
            int intermediate =s[i]-s[i+1];
            if(intermediate<0){
                intermediate = (-intermediate);
            }
            score = score+  intermediate;
            
        }
        return score;
    }
};