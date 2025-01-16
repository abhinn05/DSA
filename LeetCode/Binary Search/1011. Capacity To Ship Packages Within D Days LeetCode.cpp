class Solution {
public:
    bool possible(vector<int>& a , int capacity , int days)
    {
        int count = 0;
        int result = 1;
        for(int weight : a)
        {
            if(weight > capacity)
            {
                return false;
            }
            if(count + weight > capacity)
            {
                result++;
                count = weight;
            }
            else
            {
                count += weight;
            }
        }
        return result <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();

        int low = *max_element(weights.begin(), weights.end());  // Minimum capacity
        int high = accumulate(weights.begin(), weights.end(), 0);  // Maximum capacity


        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if (possible(weights, mid, days)) 
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