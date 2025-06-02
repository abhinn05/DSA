class Solution {
public:
    int candy(vector<int>& ratings) {
        int count = 0;
        int n = ratings.size();
        vector<int> L(n,1);
        vector<int> R(n,1);
        
        for(int i=1;i<n;i++)
        {
            if(ratings[i] > ratings[i-1])
            {
                L[i] = L[i-1] + 1;
            }
        }
        for(int i=n-2;i>=0;i--)
        {
            if(ratings[i] > ratings[i+1])
            {
                R[i] = R[i+1] + 1;
            }
        }

        for(int i=0;i<n;i++)
        {
            int m = max(L[i],R[i]);
            count += m;
        }    

        return count;
    }
};