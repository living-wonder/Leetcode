class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.size();i++){
            if(haystack[i]==needle[0]){
                int j=0;
                int k=i;
                while(j<needle.size()&&k<haystack.size()&&needle[j]==haystack[k]){
                    j++;
                    k++;
                    if(j==needle.size()){
                        return i;
                    }
                }
            }
        }
       
           
       return -1;
    }
};