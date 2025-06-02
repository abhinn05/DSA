class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f = 0;
        int t = 0;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i] == 5)
            {
                f++;
            }
            else if(bills[i] == 10)
            {
                if(f>0)
                {
                    f--;
                    t++;
                }
                else
                {
                    return false;
                }
                
            }
            else
            {
                if(f>0 && t>0)
                {
                    f--;
                    t--;
                }
                else if(f>=3)
                {
                    f = f - 3;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};