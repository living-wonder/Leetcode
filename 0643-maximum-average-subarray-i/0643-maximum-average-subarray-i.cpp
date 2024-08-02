class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left = 0;
        int right = k;
        double sum=0;
        double average =0;
        double maxi=0;
        for(int i=0;i<k;i++){
            sum=sum+nums[i];
            
        }
        average = sum/k;
        cout<<average;
        maxi=average;
        while(right<nums.size()){
            sum = sum-nums[left];
            sum= sum+nums[right];
            average = sum/k;
            cout<<average<<endl;
            maxi = max(maxi,average);
            left++;
            right++;
            
            
        }
     return maxi;   
    }
};