class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        int i =0;
        int n = s.size();
        while(i<n){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            
            else if(!st.empty()){

                if(s[i]==')' && st.top()=='('){
                    st.pop();
                }
                else if(s[i]==']' && st.top()=='['){
                    st.pop();
                }
                else if(s[i]=='}' && st.top()=='{'){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }       
            i++;
        }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};