class Solution {
public:
    bool check(unordered_map<string,int> word , string s, int wordLen)
    {
        for(int j=0;j<s.size();j+=wordLen)
        {
            string w = s.substr(j,wordLen);
            if(word.find(w) != word.end())
            {
                if(--word[w] == -1)
                {
                    return false;
                }
            }
            else return false;
        } 
        return true;
    }
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
        int wordLen = words[0].size();
        int sLen = s.size();
        int window = words.size() * wordLen;

        unordered_map<string,int> word;
        for(int i=0;i<words.size();i++)
        {
            word[words[i]]++;
        }
        int i = 0;
        while(i + window <= sLen)
        {
            if(check(word , s.substr(i,window), wordLen))
            {
                result.push_back(i);
            }
            i++;
        }
        return result;
  }
};