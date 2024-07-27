class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        vector<int> score;
        int j=0;
        for(int i=0;i<n;i++){
            if(operations[i]=="+"){
                int n = score.size();
                int sub=score[score.size()-1]+score[score.size()-2];
                score.push_back(sub);
                
            }
            else
                 if(operations[i]=="C")
                 {
                  score.pop_back();
                 }
            else
                 if(operations[i]=="D")
                 {
                  int n = score.size();
                  int sub=score[score.size()-1]*2;
                  score.push_back(sub);
                 }
            else{
               int sub = stoi(operations[i]);
;
;
                 score.push_back(sub);
            }
            
            
            
            
           }
        // if(score.size()==0){
        //     re
        // }
        int res =0;
        
        for(int i=0;i<score.size();i++){
            res= res+score[i];
            
        }
           
               
    return res;  
    }
};