class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> arr;
        for(int i=0;i<nums.size();i++)
        {
            bool found = false;
            int j = i + 1;
            while(j<nums.size())
            {
                if(nums[i] < nums[j])
                {
                    arr.push_back(nums[j]);
                    found = true;
                    break;
                }
                j++;
            }
            if(!found)
            {
                int j = 0;
                while(j<i)
                {
                    if(nums[j] > nums[i])
                    {
                        arr.push_back(nums[j]);
                        found = true;
                        break;
                    }
                    j++;
                }
            }
            if(!found) arr.push_back(-1);
        }
        return arr;
    }
};