class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left =0;
        int right =0;
        int maxones =0;
        int zeros =0;
        int length =0;
        while(right<nums.size()){
            if(nums[right]==0) zeros++;
            right++;
            while(zeros>k){
                if(nums[left]==0)  zeros--;
                left++;
            }
          if(zeros<=k){
              length=right-left;
              maxones=max(maxones,length);
          }
            
        }
     return maxones;   
    }
};