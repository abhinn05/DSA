class Solution {
public:
    vector<double> sampleStats(vector<int>& count) {
        int n = count.size();
        int totalCount = 0;
        double sum = 0.0;
        int minVal = -1, maxVal = -1;
        int mode = 0, maxFreq = 0;

        for (int i = 0; i < n; i++) 
        {
            if (count[i] == 0) continue;

            if (minVal == -1) minVal = i;
            maxVal = i;

            sum += (long long)count[i] * i;
            totalCount += count[i];

            if (count[i] > maxFreq) 
            {
                maxFreq = count[i];
                mode = i;
            }
        }

        int mid1 = (totalCount + 1) / 2;
        int mid2 = (totalCount % 2 == 0) ? mid1 + 1 : mid1;

        int cumulative = 0;
        int median1 = -1, median2 = -1;

        for (int i = 0; i < n; i++) 
        {
            cumulative += count[i];
            if (cumulative >= mid1 && median1 == -1) 
            {
                median1 = i;
            }
            if (cumulative >= mid2) 
            {
                median2 = i;
                break;
            }
        }

        vector<double> res;
        res.push_back(minVal);
        res.push_back(maxVal);
        res.push_back(sum / totalCount);
        res.push_back((median1 + median2) / 2.0);
        res.push_back(mode);

        return res;
    }
};
