bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    sort(arrive.begin(), arrive.end());
    sort(depart.begin(), depart.end());

    int rooms = 0, i = 0, j = 0;
    int n = arrive.size();
    
    while(i<n && j<n)
    {
        if(arrive[i] <= depart[j])
        {
            rooms++;
            i++;
            if(rooms > K) return 0;
        }
        else
        {
            rooms--;
            j++;
        }
    }
    return 1;
}
