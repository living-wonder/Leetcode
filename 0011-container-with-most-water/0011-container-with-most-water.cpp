#include <algorithm> 
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi =INT_MIN;
        
        int n = height.size();
        int i =0;
        int j = n-1;
        while (i<j){
                int mini = min(height[i],height[j]);
                int dis = j -i;
                int area = mini * dis;
                maxi = max(area,maxi);
                if(height[i]>height[j]){
                    j--;
                }
            else{
                i++;
            }
        }
            
        
        return maxi;
    }
};