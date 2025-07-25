bool compare(string s1,string s2)
{
    string aa = s1.substr(s1.find('-'));
    string bb = s2.substr(s2.find('-'));
    
    return aa == bb ? s1 < s2 : aa < bb;
}
vector<string> Solution::reorderLogs(vector<string> &A) {
    vector<string> result;
    int count = 0;
    for(auto log : A)
    {
        if(log.back() <= 'z' and log.back() >= 'a') 
        {
            result.insert(result.begin(),log);
            count++;
        }
        else result.push_back(log);
    }
    sort(result.begin(),result.begin()+count,compare);
    return result;
}