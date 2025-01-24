class Solution {
public:
    double myPow(double x, int n) {
        if(n==0 || x==1) return 1;
        long long power = n;
        if(n<0)
        {
            x = 1/x;
            power = -power;
        }
        double ans = myPow(x,power/2);
        if(power%2 == 0) return ans * ans;
        else return ans * ans * x;
     
        }
};