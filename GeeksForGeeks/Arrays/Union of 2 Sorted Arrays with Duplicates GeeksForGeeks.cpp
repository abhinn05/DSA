class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        set<int> c;
        
        for(int x : a)
        {
            c.insert(x);
        }
        
        for(int x : b)
        {
            c.insert(x);
        }
        
        vector<int> result(c.begin(),c.end());
        
        return result;
    }
};