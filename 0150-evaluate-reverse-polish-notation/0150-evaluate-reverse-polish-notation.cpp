class Solution {
public:
     bool checkifoper(string c)
    {
        if(c=="+" || c=="-" || c=="*" || c=="/")
            return true;
        else 
            return false;
    }
    int evalRPN(vector<string>& tokens) {
          stack <int> s;
        
        for(int i = 0; i < tokens.size(); i++)
        {
            if(!checkifoper(tokens[i]))
            {
                s.push(stoi(tokens[i]));
            }
            else
            {
                long int num1=s.top();
                s.pop();
                long int num2=s.top();
                s.pop();
                if(tokens[i]=="+")
                {
                     s.push(num1 + num2);
                }
                if(tokens[i]=="-")
                {
                     s.push(num2 - num1);
                }
                if(tokens[i]=="/")
                {
                    s.push(num2 / num1);
                }
                if(tokens[i]=="*")
                {
                    s.push(num2 * num1);
                }
            }
        }
        return s.top();
    }
};