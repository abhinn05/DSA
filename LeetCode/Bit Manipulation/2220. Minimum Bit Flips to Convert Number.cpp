class Solution {
public:
    vector<int> tobinary(int n, vector<int>& s)
    {
        if(n==0) return s;

        while(n>0)
        {
            s.push_back(n%2);
            n = n/2;
        }
        reverse(s.begin(),s.end());
        return s;
    }
    int minBitFlips(int start, int goal) {
        vector<int> a;
        vector<int> b;
        tobinary(start,a);
        tobinary(goal,b);

        int lenDiff = abs((int)a.size() - (int)b.size());
        if (a.size() < b.size()) a.insert(a.begin(), lenDiff, 0);
        else if (b.size() < a.size()) b.insert(b.begin(), lenDiff, 0);
        
        int count = 0;

        for(int i=0;i<b.size();i++)
        {
            if(a[i] != b[i]) count++;
        }
        return count;
    }
};