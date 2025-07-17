class Solution {
public:
    string countAndSay(int n) {
        string result = "1";
        int i = 2;
        while(i<=n)
        {
            int count = 1;
            int j = 0;
            string temp = "";
            while(j<result.size()-1)
            {
                if(result[j] == result[j+1]) count++;
                else
                {
                    temp += to_string(count);
                    temp += result[j];
                    count = 1;
                }
                j++;
            }
            temp += to_string(count);
            temp += result.back();
            result = temp;
            i++;
        }
        return result;

    }
};