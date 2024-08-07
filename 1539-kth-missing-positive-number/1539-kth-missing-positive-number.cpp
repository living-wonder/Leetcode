class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> temp;
        for(int i=0;i<2000;i++){
            temp.push_back(i+1);
        }
        int i=0;
        int j=0;
        vector<int> result;
        while(i<arr.size()){
            if(arr[i]!=temp[j]){
              cout<<temp[j]<<endl;
               result.push_back(temp[j]);
               
            }
            else{
                i++;
            }
     j++;
        }
        while(j<temp.size()){
            result.push_back(temp[j]);
            j++;
        }
       
       return result[k-1]; 
        
        
    }
};