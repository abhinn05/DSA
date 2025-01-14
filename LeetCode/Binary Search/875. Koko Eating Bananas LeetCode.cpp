class Solution {
public:
    int findMax(vector<int> &v) 
    {
        int maxi = INT_MIN;
        int n = v.size();
        for (int i = 0; i < n; i++) 
        {
            maxi = max(maxi, v[i]);
        }
        return maxi;
    }
    double calculateTotalHours(vector<int> &v, int hourly) 
    {
        double totalH = 0;
        int n = v.size();
        for (int i = 0; i < n; i++) 
        {
            totalH += ceil((double)(v[i]) / (double)(hourly));
        }
        return totalH;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int k = 0;
        int low = 0;
        int high = findMax(piles);
        while(low<=high)
        {
            int mid = low +(high-low)/2;
            double totalH = calculateTotalHours(piles,mid);
            if(totalH <= h)
            {
                high = mid - 1;
            }
            else if(totalH > h)
            {
                low = mid + 1;
            }
        }
        return low;
    }
};