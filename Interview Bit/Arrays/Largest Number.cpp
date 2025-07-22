bool comparecustom(string a,string b)
{
    return a + b > b + a;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<string> nums;
    for(int a : A) nums.push_back(to_string(a));
    
    sort(nums.begin(),nums.end(),comparecustom);
    
    if(nums[0]=="0") return "0";
    string result = "";
    
    for(auto a : nums) result += a;
    
    return result;
}
