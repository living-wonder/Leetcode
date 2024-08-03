class Solution {
public:
    int maxVowels(string s, int k) {
        int vowels=0;
        int maxVow=0;
        
        for(int i=0;i<k;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                vowels++;
            }
            
        }
        maxVow = vowels;
        int right =k;
        int left=0;
        while(right<s.size())
        {
             
          if(s[left]=='a'||s[left]=='e'||s[left]=='i'||s[left]=='o'||s[left]=='u') 
          {
              vowels--;
              
          }
             if(s[right]=='a'||s[right]=='e'||s[right]=='i'||s[right]=='o'||s[right]=='u') 
          {
              vowels++;
             
          }
           
          maxVow = max(vowels,maxVow) ;
          left++;
          right++; 
            
        }
        
        
        
        
     return maxVow;   
    }
};