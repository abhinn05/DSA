class Solution {
public:
    int eval(int m,vector<int>& arr, int target)
    {
        int sum = 0;
        for(int i=0;i<arr.size();i++)
        {
            sum = sum+min(arr[i],m);
        }
        return abs(sum-target);
    }
    int findBestValue(vector<int>& arr, int target) {
        int l = 0;
        int r = 100001;
        while(l<r)
        {
            int m = (l+r) >> 1;
            if(eval(m,arr,target) <= eval(m+1,arr,target)) r=m;
            else l=m+1;
        }
        return l;        
    }
};