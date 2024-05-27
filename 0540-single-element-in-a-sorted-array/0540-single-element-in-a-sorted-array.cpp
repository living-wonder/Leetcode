class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       int left =0;
       int right =nums.size()-1;
        while(left<right)
        {
            int mid = (left+right)/2;
            if(mid%2==1){
                mid--;
            }
            if(nums[mid+1]!=nums[mid]){
                right=mid;
            }
            else
            {
               left= mid+2;  
            }
            
        }
        
     return nums[left];   
    }
};
 