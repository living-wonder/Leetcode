class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        if(digits[n-1]!=9){
            digits[n-1]++;
            
        }
        else{
           
            for(int i= n-1;i>=0;i--) {
                
                
                if(digits[i]==9){
                    digits[i]=0;
                    if(i!=0 && digits[i-1]!=9)
                     { 
                        ++digits[i-1];
                        break;
                     } 
                    if(i==0){
                    digits.insert(digits.begin(),1);
                }
                  
                }
                else{
                    break;
                }
            }  
            
            
        }
      return digits;  
    }
};