class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     int n=nums.size();
     vector <int> res(n,1);
     int post=1;
     for(int i=0;i<nums.size();i++)
     {
       res[i]=post;
       post=post*nums[i];
         
     }
     post=1;
     for(int i=n-1;i>=0;i--)
     {
       res[i]=res[i]*post;
       post=post*nums[i];
         
     }
        
        return res;
    }
};