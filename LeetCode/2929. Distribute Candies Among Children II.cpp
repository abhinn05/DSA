class Solution {
public:
    long long distributeCandies(int n, int limit) {
        long long ans = 0;

        for(int i=0;i<=min(n,limit);i++)
        {
            int m = n - i;
            if(m>2*limit)
            {
                continue;
            }
            int max = min(m,limit);
            int min = m-max;
            ans = ans + (max-min+1);
        }
        return ans;
        
    }
};