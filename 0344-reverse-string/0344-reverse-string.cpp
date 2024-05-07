class Solution {
public:
    void reverseString(vector<char>& s) {
      int n=s.size();
      reverse(s,0,n-1);
        
    }
    void reverse(vector<char>& s,int i,int j){
        if(i>j){
            return;
        }
        swap(s[i],s[j]);
        i++;
        j--;
        reverse(s,i,j);
    }
};