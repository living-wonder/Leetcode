class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude =0;
        vector<int> att;
        int maxi =0;
        for(int i=0;i<gain.size();i++){
           altitude = altitude + gain[i];
            maxi = max(altitude,maxi);
       }
      return maxi;  
    }
};