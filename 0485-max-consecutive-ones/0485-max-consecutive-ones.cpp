class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cons = 1;
        int maxi=1;
        int n = nums.size();
        for(int i = 0 ;i<nums.size()-1;i++){
            if(nums[i]==1 && nums[i+1] ==1 ){
                cons ++;
                 maxi= max(maxi,cons);
            }
            else{
               
                cons=1;
            }
        }
        sort(nums.begin(),nums.end());
        if(nums[n-1]==0) return 0;
        return maxi;
        
    }
};