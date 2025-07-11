class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums2.size();
        for(int i=0;i<m;i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());

        int n = nums1.size();
        double median = 0;
        if(n%2==0)
        {
            median = (nums1[(n/2)-1] + nums1[n/2]) / 2.0;
        }
        else
        {
            median = nums1[n/2];
        }
        return median;
    }
};