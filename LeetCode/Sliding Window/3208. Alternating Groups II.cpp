class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int ans = 0;
        for(int i=0;i<k-1;i++)
        {
            colors.push_back(colors[i]);
        }
        int n = colors.size();
        
        int left=0;
        int right=1;
        while(right<n)
        {
            if(colors[right] == colors[right-1])
            {
                left = right;
                right++;
                continue;
            }
            right++;

            if(right - left < k) continue;

            ans++;
            left++;
        }
        
        return ans;
    }
};
