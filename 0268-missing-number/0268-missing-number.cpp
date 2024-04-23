class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missing;
        int j =0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=j){
                missing=j;
                break;
                
            }
            else{
                missing=nums.size();
            }
            j++;
        }
        return missing;
    }
};