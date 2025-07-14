class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(int n : nums)
        {
            map[n]++;
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> heap;

        for(auto& [num,count] : map)
        {
            heap.push({count,num});
            if(heap.size() > k) heap.pop();
        }

        vector<int> result;
        while(!heap.empty())
        {
            result.push_back(heap.top().second);
            heap.pop();
        }
        return result;
    }
};