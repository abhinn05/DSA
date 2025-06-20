class Solution {
public:
    int magicalString(int n) {
        string s = "122";
        int i = 2;
        int c = 1;
        char next = '1'; 

        while(i < n && s.size() < n)
        {
            int freq = s[i] - '0';
            for(int j = 0; j < freq; j++) 
            {
                s += next;
                if(s.size() <= n && next == '1') c++;
            }
            next = (next == '1') ? '2' : '1';
            i++;
        }
        
        return c;
    }
};
