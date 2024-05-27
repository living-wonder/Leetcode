class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int count =0;
        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        for(int i=0;i<n-1;i+=2){
            if(nums[i]!=nums[i+1]){
                return nums[i];
                i--;
             }
        }
       return nums[n-1];
    }
};