class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minP = INT_MAX;
        int maxP = 0;

        if(n==0) return 0;

        for(int i=0;i<n;i++)
        {
            minP = min(minP,prices[i]);

            maxP = max(maxP,prices[i] - minP);
        }

        return maxP;
        
    }
};