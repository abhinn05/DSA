class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string current;
        backtrack(result, current, 0, 0, n);
        return result;
    }
    
    void backtrack(vector<string>& result, string current, int open, int close, int n) {
        if (current.length() == 2 * n) 
        {
            result.push_back(current);
            return;
        }
        
        if (open < n)
        {
            backtrack(result, current + "(", open + 1, close, n);
        }
        if (close < open) 
        {
            backtrack(result, current + ")", open, close + 1, n);
        }
    }
};
