class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int left =0;
        int right =1;
        int cons =0;
         int  maxcons=0;
        if(nums[left]==1){
            cons++;
        }
        maxcons=cons;
        while(right<nums.size())
        {
            if(nums[right]==1){
                cons++;
                
            }
            else{
                right++;
                left=right;
                if(left<nums.size() &&nums[left]==1){
                    cons=1;
                }
                else{
                    cons=0;
                }
            }
            right++;
            maxcons=max(maxcons,cons);
            
            
            
        }
        return maxcons;
        
    }
};