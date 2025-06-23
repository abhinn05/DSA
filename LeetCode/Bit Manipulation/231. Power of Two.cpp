class Solution {
public:
    bool isPowerOfTwo(int n) {
        int p = 1;
        while(p<=n)
        {
            if(p == n) return true;
            else if(p > n/2) return false;
            p = p*2;
        }
        return false;
    }
};