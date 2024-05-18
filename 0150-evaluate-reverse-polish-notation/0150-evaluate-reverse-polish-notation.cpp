class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
          int b ,a,c,d;
        for(int i =0;i<tokens.size();i++){
            
            if(tokens[i]=="*" || tokens[i]=="/" || tokens[i] == "+" || tokens[i]=="-"){
                if(st.size()<2){
                    break;
                }
                else{
                     b = st.top();
                     st.pop();
                     a = st.top();
                     st.pop();
                     if(tokens[i]=="*"){
                         c = a * b;
                     }
                    if(tokens[i]=="+"){
                         c = a + b;
                     }
                    if(tokens[i]=="-"){
                         c = a - b;
                     }
                    if(tokens[i]=="/"){
                         c = a / b;
                     }
                    st.push(c);
                }
            }
            else
            {
               d = stoi(tokens[i]);
               st.push(d);
            }
            
        }
      return st.top();  
    }
};