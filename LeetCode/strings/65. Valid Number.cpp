class Solution {
public:
    bool isNumber(string s) {
        int n = s.size();
        bool dot=false,nums=false,e=false;

        for(int i=0;i<n;i++)
        {
            if(isdigit(s[i])) nums=true;
            else if(s[i] == '+' || s[i] == '-')
            {
                if(i>0 && (s[i-1] != 'e' && s[i-1] != 'E')) return false;
            }
            else if(s[i] == 'e' || s[i] == 'E')
            {
                if(e || !nums) return false;
                e = true;
                nums = false;
            }
            else if(s[i] == '.')
            {
                if(dot || e) return false;
                dot = true;
            }
            else return false;
        }
        return nums;
    }
};