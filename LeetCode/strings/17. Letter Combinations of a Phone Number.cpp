class Solution {
public:
    vector<string> result;
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0) return result;
        unordered_map<char,string> mp = {
            {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"},
            {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
        };
        string temp;
        solve(0,digits,temp,mp);
        return result;
    }

    void solve(int idx,const string& digits,string& temp,unordered_map<char,string>& mp)
    {
        if (idx == digits.size()) 
        {
            result.push_back(temp);
            return;
        }
        string letters = mp[digits[idx]];
        for(char c : letters)
        {
            temp.push_back(c);
            solve(idx+1,digits,temp,mp);
            temp.pop_back();
        }
    }
};