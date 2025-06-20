class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int i = 0;
        while(i<arr.size())
        {
            if(arr[i] == 0)
            {
                arr.insert(arr.begin() + i,0);
                i++;
                arr.pop_back();
            }
            i++;
        }
    }
};