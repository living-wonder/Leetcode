class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        int n = salary.size();
        double total =0;
        double average=0;
        for(int i=1;i<n-1;i++){
            total = total+salary[i];
        }
       average = total/(n-2);
      return average;  
    }
};