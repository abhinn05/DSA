class Solution {
public:
    int maxProduct(int n) {
        vector<int> a;
        while(n>0)
        {
            int num = n%10;
            a.push_back(num);
            n = n/10;
        }
        int m = a.size();
        sort(a.begin(),a.end());

        int result = a[m-2] * a[m-1];

        return result;
    }
};