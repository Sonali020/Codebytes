class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) 
    {
        int n = arr.size();

         if (n < 2) 
         {
           return -1;
         }

        int Largest = INT_MIN;
        int secondLargest = INT_MIN;

        for (int i = 0; i < n; i++) 
        {
            if (arr[i] > Largest) 
            {
                secondLargest = Largest; 
                Largest = arr[i];        
            }
            else if (arr[i] > secondLargest && arr[i] != Largest)
            {
                secondLargest = arr[i];
            }
        }
       if (secondLargest == INT_MIN) {
            return -1; 
        }
        return secondLargest;
    }
};
