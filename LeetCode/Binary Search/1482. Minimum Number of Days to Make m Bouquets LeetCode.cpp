class Solution {
public:
    int min(vector<int>& a)
    {
        int min = INT_MAX;
        for(int i=0;i<a.size();i++)
        {
            if(min>a[i])
            {
                min = a[i];
            }
        }
        return min;
    }
    int max(vector<int>& a)
    {
        int max = INT_MIN;
        for(int i=0;i<a.size();i++)
        {
            if(max<a[i])
            {
                max = a[i];
            }
        }
        return max;
    }
    bool possible(vector<int>& a , int day , int m , int k)
    {
        int n = a.size(); 
        int cnt = 0;
        int noOfB = 0;
        for (int i = 0; i < n; i++) 
        {
            if (a[i] <= day) 
            {
                cnt++;
            }
            else 
            {
                noOfB += (cnt / k);
                cnt = 0;
            }
        }
        noOfB += (cnt / k);
        return noOfB >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long total = m * 1ll * k * 1ll;
        if(total > n) return -1;

        int low = min(bloomDay);
        int high = max(bloomDay);
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if (possible(bloomDay, mid, m, k)) 
            {
                high = mid - 1;
            }
            else 
            {
                low = mid + 1;
            }

        }
        return low;
    }
};