class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sizeOfS = s.size();
        int sizeOfT = t.size();
        int i=0 ;
        int j=0;
        if(sizeOfS==0){
            return true;
        }
        if(sizeOfT==0){
            return false;
        }
       while(i < sizeOfS && j<sizeOfT){
           if(s[i]== t[j]){
               if(i== sizeOfS-1){
                   return true;
               }
                i++;
               j ++;
           }
           else{
               j++;
           }
           
       }
     return false;   
    }
};