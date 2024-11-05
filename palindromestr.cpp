bool isPalindrome(char s[]) 
{
    int start = 0;
    int end = strlen(s) - 1;
    
    while (start < end) 
    {
        if (s[start] != s[end]) 
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
