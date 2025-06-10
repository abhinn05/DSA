class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int a = int(target);
        vector<int> ans;
        int n = letters.size();
        int c = 0;

        for(int i=0;i<n;i++)
        {
            int b = int(letters[i]);
            ans.push_back(b);
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<n;i++)
        {
            if(ans[i] > a)
            {
                c = ans[i];
                break;
            }
        }
        if(c == 0)
        {
            return letters[0];
        }
        char h = char(c);

        return h;
    }
};