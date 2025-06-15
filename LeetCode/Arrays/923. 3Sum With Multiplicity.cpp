class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        long m[101] = {}, res = 0;
        for (auto n : arr) ++m[n];
        for (auto i = 0; i < 101; ++i) 
        {
            if (i * 3 == target) res += m[i] * (m[i] - 1) * (m[i] - 2) / 6;
            for (auto j = i + 1, k = target - i - j; j < 101; ++j, --k) 
            {
                if (i * 2 + j == target) res += m[i] * m[j] * (m[i] - 1) / 2;
                if (i + j * 2 == target) res += m[i] * m[j] * (m[j] - 1) / 2;
                if (k > j && k < 101) res += m[i] * m[j] * m[k];
            }
    }
    return res % 1000000007;
    }
};