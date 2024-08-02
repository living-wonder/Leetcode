class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n=0;
        int first = 0;
        int second = nums.size()-1;
        sort(nums.begin(),nums.end());
        while(first<second){
           if(nums[first]+nums[second]==k){
               first++;
               second--;
               n++;
           }
            else
                if(nums[first]+nums[second]>k){
                    second--;
                    
                }
            else{
                first++;
            }
            
            
        }
     return n;   
    }
};