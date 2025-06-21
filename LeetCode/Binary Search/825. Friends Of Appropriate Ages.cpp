class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        int a[121] = {};
        int res = 0;
        for (auto age : ages) ++a[age];
        
        for (auto i = 15; i <= 120; ++i)
            for (int j = 0.5 * i + 8; j <= i; ++j) 
                res += a[j] * (a[i] - (i == j));
        
        return res;
    }
};