class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int jew = jewels.length();
        int stone = stones.length();
        int result=0;
        for(int i =0;i<stone ;i++){
            for(int j =0;j<jew;j++){
                if(jewels[j]==stones[i]){
                    result++;
                }
            }
        }
    
        return result;
    }
};