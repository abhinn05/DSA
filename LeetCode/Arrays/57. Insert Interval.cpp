class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
         
        sort(intervals.begin(),intervals.end());

        int i = 1;
        while(i<intervals.size())
        {
            if(intervals[i][0] <= intervals[i-1][1])
            {
                intervals[i-1][0] = min(intervals[i][0],intervals[i-1][0]);
                intervals[i-1][1] = max(intervals[i][1],intervals[i-1][1]);
                intervals.erase(intervals.begin() + i);
            }
            else
            {
                i++;
            }
            
        }
        return intervals;
    }
};