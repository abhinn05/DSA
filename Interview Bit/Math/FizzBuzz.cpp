vector<string> Solution::fizzBuzz(int A) {
    vector<string> result;
    int i = 1;
    while(i<=A)
    {
        if(i%3 == 0 && i%5 == 0) result.push_back("FizzBuzz");
        else if(i%5 == 0) result.push_back("Buzz");
        else if(i%3 == 0) result.push_back("Fizz");
        else result.push_back(to_string(i));
        i++;
    }
    return result;
}