class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count = 0;
        int current = 1;
        int i = 0;
        while(count<k)
        {
            if(i<arr.size() && arr[i] == current)
            {
                i++;
            }
            else
            {
                count++;
                if(count == k)
                {
                    return current;
                }
            }
            current++;
        }
        return -1;
    }
};