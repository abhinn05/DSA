class Solution {
  public:
    string multiplyStrings(string& s1, string& s2) {
        string a = s1;
        string b = s2;
        string s = "";

        if ((a == "0") || (b == "0") || a.find_first_not_of("0") == string::npos || b.find_first_not_of("0") == string::npos)
            return "0";

        bool neg = false;
        if (a[0] == '-') 
        {
            neg = !neg;
            a = a.substr(1);
        }
        if (b[0] == '-') 
        {
            neg = !neg;
            b = b.substr(1);
        }

        int n1 = a.size();
        int n2 = b.size();
        vector<int> result(n1 + n2, 0);

        for (int i = n1 - 1; i >= 0; i--) 
        {
            for (int j = n2 - 1; j >= 0; j--) 
            {
                int mul = (a[i] - '0') * (b[j] - '0');
                int sum = mul + result[i + j + 1];

                result[i + j + 1] = sum % 10;
                result[i + j] += sum / 10;
            }
        }

        int i = 0;
        while (i < result.size() && result[i] == 0) i++;
        while (i < result.size()) s += to_string(result[i++]);

        if (neg) s = '-' + s;
        
        return s;
    }
};
