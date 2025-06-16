#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
public:
   long long int numberOfInversions(vector<int> nums) 
   {
        long long ans = 0;
        int n = nums.size();
        int i = 0;
        while(i<n-1)
        {
            int j = i+1;
            while(j<n)
            {
                if(nums[i] > nums[j]) ans++;

                j++;
            }
            i++;
        }
        return ans;
    }
};

int main() 
{
    Solution sol;

    vector<int> nums = {2, 4, 1, 3, 5};
    long long result = sol.numberOfInversions(nums);

    cout << "Number of inversions: " << result << endl;

    return 0;
}