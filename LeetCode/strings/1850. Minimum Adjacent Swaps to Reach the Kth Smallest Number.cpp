class Solution {
public:
    int getMinSwaps(string num, int k) {
        int m = num.size();
        string s = num;
        int ans = 0;
        for(int p=0;p<k;p++)
        {
            int i = m-2;
            while(i>=0 && num[i+1] <= num[i]) i--;

            if(i>=0)
            {
                int j = m-1;
                while(num[j]<=num[i]) j--;
                
                swap(num[i],num[j]);
                reverse(num.begin()+i+1,num.end());
            }
        }
        for(int i=0;i<m;i++)
        {
            if(s[i] == num[i]) continue;

            int j = i+1;
            while(j<m && s[j] != num[i]) j++;

            while(j>i)
            {
                swap(s[j],s[j-1]);
                ans++;
                j--;
            }
        }
        return ans;
        
    }
};