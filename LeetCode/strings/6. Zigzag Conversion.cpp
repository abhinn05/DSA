class Solution {
public:
    string convert(string s, int numRows) {
        if(s.empty()) return "";
        if(numRows <= 1) return s;
        int k = 0;
        int inc = 1;
        vector<string> str(numRows);

        for(int i=0;i<(int)s.size();i++)
        {
            str[k].push_back(s[i]);
            if(k == numRows - 1) inc = -1;
            else if(k == 0) inc = 1;
            k += inc;
        }   
        string result;
        for(auto& a : str)
        {
            result += a;
        }   
        return result;
    }
};