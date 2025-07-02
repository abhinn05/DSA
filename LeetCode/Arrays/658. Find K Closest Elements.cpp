class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();

        if (arr[0] > x) 
        {
            return vector<int>(arr.begin(), arr.begin() + k);
        }
        if (arr[n - 1] < x) 
        {
            return vector<int>(arr.end() - k, arr.end());
        }

        int left = 0;
        int right = n - 1;

        while(right - left >= k)
        {
            if(abs(arr[left] - x) > abs(arr[right] - x)) left++;
            else right--;
        }
        
        return vector<int>(arr.begin() + left, arr.begin() + right + 1);
    }
};