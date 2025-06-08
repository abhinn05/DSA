class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int boats = 0;
        int n = people.size();
        sort(people.begin(),people.end());
        int left = 0;
        int right = n - 1;

        while(left<=right)
        {
            if(people[left] == limit)
            {
                boats++;
                left++;
            }

            else if(people[right] == limit)
            {
                boats++;
                right--;
            }
 
            else if(people[left] + people[right] <= limit)
            {
                left++;
                right--;
                boats++;
            }
            else if(people[left] + people[right] > limit)
            {
                right--;
                boats++;
            }
        }
        return boats;
    }
};