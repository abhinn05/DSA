string Solution::findDigitsInBinary(int A) {
    if(A == 0 ) return "0";
    
    string result = "";
    while (A > 0) 
    {
        result = char('0' + A % 2) + result; 
        A /= 2;
    }
    
    return result;
}
