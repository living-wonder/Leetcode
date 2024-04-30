class Solution {
public:
    bool canJump(vector<int>& nums) {
       int steps =0;
        int n = nums.size();
        if(n==1) return true;
        steps=nums[0];
        for(int i=0;i<n;i++){
            steps--;
            if(steps<0) return false;
            if(i==n-1) return true;
            if(steps<nums[i]){
                steps=nums[i];
            }
        }
      return true;  
    }
};