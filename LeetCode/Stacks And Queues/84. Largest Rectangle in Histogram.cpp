class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int area = 0;
        int n = heights.size();
        
        for(int i=0;i<=n;++i)
        {
            int curr = (i == n) ? 0 : heights[i];

            while(!st.empty() && heights[st.top()] > curr)
            {
                int height = heights[st.top()];
                st.pop();
                int width = st.empty() ? i : i - st.top() - 1;
                area = max(area,height*width);
            }
            st.push(i);
        }
        return area;
    }
};