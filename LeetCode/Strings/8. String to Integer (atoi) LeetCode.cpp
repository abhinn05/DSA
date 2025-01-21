class Solution {
public:
    int myAtoi(string s) {
        int i = 0; 
        int n = s.size();
        long result = 0;
        int sign = 1;

        while (i < n && s[i] == ' ') i++;

        if (i < n && (s[i] == '+' || s[i] == '-')) 
        {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        while (i < n && isdigit(s[i])) 
        {
            result = result * 10 + (s[i] - '0');
            
            if (result > INT_MAX) 
            {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            i++;
        }

        return sign * result;
    }
};
