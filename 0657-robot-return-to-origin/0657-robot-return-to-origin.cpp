class Solution {
public:
    bool judgeCircle(string moves) {
        vector<int> origin = {0,0};
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U'){
                origin[1]++;
            }
            if(moves[i]=='D'){
                origin[1]--;
            }
             if(moves[i]=='R'){
                origin[0]++;
            }
            if(moves[i]=='L'){
                origin[0]--;
            }
        }
      if(origin[1]==0 && origin[0]==0){
          return true;
      }
        return false;
    }
};