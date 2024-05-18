#include <vector>
#include <algorithm>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int n = prices.size();
      
   
        int profit=0;
        int mini = prices[0];
        for(int i=1;i<n;i++){
      
            mini = min(mini,prices[i]);
            int temp = prices[i] -mini;
            if(temp>profit){
                profit = temp;
            }
            
            
            
            
            
        }
       
      
        return profit;
    }
};
