class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int count = 0;
        int freq[26] = {0};

        for(char task : tasks)
        {
            freq[task-'A']++;
            count = max(count,freq[task - 'A']);
        }
        int time = (count - 1) * (n + 1);
        for(int f : freq)
        {
            if(f == count) time++;
        }
        return max((int)tasks.size(),time);
    }
};