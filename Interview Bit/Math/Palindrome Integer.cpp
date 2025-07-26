int Solution::isPalindrome(int A) {
    int num = 0;
    int temp = A;
    
    while(temp>0)
    {
        int digit = temp%10;
        num = num*10 + digit;
        temp /= 10;
    }
    
    if(num == A) return 1;
    
    return 0;
}

