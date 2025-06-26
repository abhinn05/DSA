class Solution {
public:
    int calculate(string s) {
        int n = s.length();
        if(n==0) return 0;

        int current = 0, last = 0, result = 0;
        char sign ='+';
        for(int i=0;i<n;i++)
        {
            char curr = s[i];
            if(isdigit(curr))
            {
                current = (current * 10) + (curr - '0');
            }
            if(!isdigit(curr) && !iswspace(curr) || i == n - 1)
            {
                if(sign=='+' || sign=='-')
                {
                    result += last;
                    last = (sign == '+') ? current : -current;
                }
                else if(sign == '*')
                {
                    last = last * current;
                }
                else if(sign == '/')
                {
                    last = last / current;
                }
                sign = curr;
                current = 0;
            }
        }
        result += last;
        return result;
    }
};