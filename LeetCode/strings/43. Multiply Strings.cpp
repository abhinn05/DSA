class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0") return "0";

        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());

        int n = num1.size() + num2.size();
        string ans(n,'0');

        for(int i=0;i<num2.size();++i)
        {
            int i2 = num2[i] - '0';
            
            for(int j=0;j<num1.size();++j)
            {
                int j2 = num1[j] - '0';

                int zeroes = i + j;
                int carry = ans[zeroes] - '0';
                int multiply = j2 * i2 + carry;

                ans[zeroes] = (multiply % 10) + '0';
                ans[zeroes + 1] += (multiply / 10);
            }
        }
        if(ans.back() == '0') ans.pop_back();

        reverse(ans.begin(),ans.end());

        return ans;
    }
};