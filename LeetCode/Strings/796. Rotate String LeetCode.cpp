class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        if(s.length() != goal.length()) return false;
        string t = s + s;

        if(t.find(goal) != string::npos) return true;
        
        return false;
        
    }
};