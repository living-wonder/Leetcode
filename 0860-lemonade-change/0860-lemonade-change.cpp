class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives=0;
        int  tens=0;
        int twenty=0;
       // sort(bills.begin(),bills.end());
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                fives = fives + 5;
            }
            if(bills[i]==10){
                tens = tens + 10;
                if(fives>0){
                   fives = fives - 5;
                }
                else
                  {
                    return false;
                }
            }
            if(bills[i]==20){
                twenty = twenty + 10;
                if(fives>0 && tens >0){
                     fives = fives - 5;
                     tens = tens - 10;
                    
                    
                }
                else
                if(fives >= 15 && tens <  1){
                    fives = fives - 15;
                }
                else
                  {
                    return false;
                }
        
        }
        
        
    }
        return true;
    }
};