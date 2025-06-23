class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        int n = s.size();
        
        for(int i=0;i<n;i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') stack.push(s[i]);
            else
            {
                if(stack.empty()) return false;
 
                char top = stack.top();
                if(s[i] == ')' && top != '(' || s[i] == '}' && top != '{' || s[i] == ']' && top != '[')
                {
                    return false;
                }
                stack.pop();
            }
        }
        return stack.empty();
    }
};