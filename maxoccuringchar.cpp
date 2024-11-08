class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
       vector<int> freq(26, 0);
        for (char ch : str) 
        {
            freq[ch - 'a']++;
        }
        char maxChar = 'a';
        int maxFreq = 0;
        for (int i = 0; i < 26; i++) 
        {
            if (freq[i] > maxFreq || (freq[i] == maxFreq && (i + 'a') < maxChar)) 
            {
                maxFreq = freq[i];
                maxChar = i + 'a';
            }
        }
        return maxChar;
    }
};
