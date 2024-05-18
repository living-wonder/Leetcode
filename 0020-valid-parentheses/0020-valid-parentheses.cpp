class Solution {
public:
    bool isValid(string s) {
      stack <char> st;
      int n = s.size();
      for(int i=0;i<n;i++){
          if(s[i]=='{'){
              st.push('{');
          }
          if(s[i]=='['){
              st.push('[');
          }
          if(s[i]=='('){
              st.push('(');
          }
           if(s[i]==')'){
               if(st.empty()) return false;
              if(st.top()!='('){
                  return false;
              }
              st.pop();
          }
          if(s[i]==']'){
               if(st.empty()) return false;
              if(st.top()!='['){
                  return false;
              }
              st.pop();
          }
           if(s[i]=='}'){
              if(st.empty()) return false;
              if(st.top()!='{'){
                  return false;
              }
              st.pop();
          }
    
              
      }
         return st.empty();   
    }
};