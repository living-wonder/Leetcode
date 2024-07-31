class Solution {
public:
    string reverseVowels(string s) {
        
        string vowels;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i'||s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I'||s[i]=='O' || s[i]=='U'){
                vowels=vowels+s[i];
            }
        }
        int n = vowels.size()-1;
        for(int i=0;i<s.size();i++){
       if(s[i]=='a' || s[i]=='e' || s[i]=='i'||s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I'||s[i]=='O' || s[i]=='U'){
                s[i]=vowels[n];
                n--;
            }
        }
      return s;  
    }
};