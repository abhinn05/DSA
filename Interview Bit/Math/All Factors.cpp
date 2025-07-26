vector<int> Solution::allFactors(int A) {
    set<int> result;  

    for(int i = 1; i * i <= A; ++i) 
    {
        if(A % i == 0) 
        {
            result.insert(i);
            result.insert(A / i);
        }
    }

    return vector<int>(result.begin(), result.end());
}
