class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stack;

        for(int a : asteroids)
        {
            if(a>0) stack.push(a);
            else
            {
                while(!stack.empty() && stack.top() > 0 && stack.top() < -a) stack.pop();

                if(stack.empty() || stack.top() < 0) stack.push(a);

                if(!stack.empty() && stack.top() == -a) stack.pop();
            }
        }
        vector<int> result(stack.size());
        int i = stack.size() - 1;

        while(!stack.empty())
        {
            result [i--] = stack.top();
            stack.pop();
        }
        return result;
    }
};