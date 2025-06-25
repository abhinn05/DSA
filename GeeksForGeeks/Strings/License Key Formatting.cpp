//Back-end complete function Template for C++
class Solution {
  public:
    string ReFormatString(string S, int K) {
        string temp = "";
        
        for(char c : S)
        {
            if(c != '-')
            {
                temp += toupper(c);
            }
        }
        
        string result = "";
        int count = 0;
        for(int i=temp.size()-1;i>=0;i--)
        {
            result += temp[i];
            count++;
            
            if(count == K && i != 0)
            {
                count = 0;
                result += '-';
            }
        }
        reverse(result.begin(),result.end());
        
        return result;
    }
};