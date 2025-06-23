class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            bool found = false;
            for(int j=0;j<m;j++)
            {
                if(nums1[i] == nums2[j])
                {
                    int k = j + 1;
                    while(k<m)
                    {
                        if(nums2[j] < nums2[k]) 
                        {
                            ans.push_back(nums2[k]);
                            found = true;
                            break;
                        }
                        k++;
                    }
                    if(!found) ans.push_back(-1);
                    break;
                }
            }
        }
        return ans;
    }
};