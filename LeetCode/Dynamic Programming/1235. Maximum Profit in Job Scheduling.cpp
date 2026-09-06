class Solution {
public:
    vector<tuple<int,int,int>> jobs;
    vector<int> dp;

    int solve(int i) {
        if (i == jobs.size()) return 0;

        if (dp[i] != -1) return dp[i];

        auto [start, end, profit] = jobs[i];

        int lo = i + 1;
        int hi = jobs.size();

        while (lo < hi) 
        {
            int mid = lo + (hi - lo) / 2;

            if (get<0>(jobs[mid]) >= end) hi = mid;
            else lo = mid + 1;
        }

        int next = lo;
        int take = profit + solve(next);
        int skip = solve(i + 1);

        return dp[i] = max(take, skip);
    }

    int jobScheduling(vector<int>& startTime,vector<int>& endTime,vector<int>& profit) {
        int n = startTime.size();

        for (int i = 0; i < n; i++) jobs.push_back({startTime[i], endTime[i], profit[i]});
        sort(jobs.begin(), jobs.end());
        dp.assign(n, -1);

        return solve(0);
    }
};
