class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int n = nums.size();
       
      for(int i=0;i<n;i++){
          int num2=target-nums[i];
          if( mp.find(num2)!=mp.end()  && mp[num2] !=i){
              return{i,mp[num2]};
          }
       
         mp[nums[i]]=i;
          
      }
        
return {};
    }
};
