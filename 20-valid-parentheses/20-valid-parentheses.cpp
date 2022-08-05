class Solution {
public:
    bool match(stack<char> &st, char c){
    if((c ==']') && (st.top()=='[')) return true;
    else if((c =='}') && (st.top()=='{')) return true;
    else if((c ==')') && (st.top()=='('))return true;
    else return false;
}
    
    bool isValid(string s) {
        stack <char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('|| s[i]=='{'|| s[i]=='[') st.push(s[i]);
            if(s[i]==')'|| s[i]=='}'|| s[i]==']')  {
                 if(st.empty()) return false;
                
                if(match(st,s[i]))st.pop();
                else return false;
                  }
        
                  
                   }      
        if (st.empty()) return true;
            else return false;
        
    }
};