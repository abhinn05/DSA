class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<string>st;
        for(int i=0;i<arr1.size();i++){
            string s=to_string(arr1[i]);
            for(int i=0;i<=s.size();i++){
                st.insert(s.substr(0,i));
            }
        }
        int ans=0;
        for(int i=0;i<arr2.size();i++)
        {
            string s=to_string(arr2[i]);
            for(int i=0;i<=s.size();i++)
            {
                string x=s.substr(0,i);
                if(st.count(x))
                {
                    int y=x.size();
                    ans=max(ans,y);
                }
            }
        }
        return ans;
    }
};