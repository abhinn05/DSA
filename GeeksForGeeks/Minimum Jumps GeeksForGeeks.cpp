class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
        int n = arr.size();
        int i = 0;
        int count = 0;
        if(n==1)
        {
            return 0;
        }
        while(i<n-1)
        {
            if(arr[i]==0)
            {
                return -1;
            }
            
            int max = i + arr[i];
            
            if(max>=n-1)
            {
                return count+1;
            }
            int next = i;
            for(int j=i+1;j<=max;j++)
            {
                if(j+arr[j] > next + arr[next])
                {
                    next = j;
                }
            }
            if(next == i)
            {
                return -1;
            }
            i = next;
            count++;
        }
        return count;
    }
};