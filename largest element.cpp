int largest(int arr[], int n) {
   int lar = arr[0];  
 
      for (int i = 1; i < n; i++) 
      {
        if (arr[i]>lar) 
        {
            lar = arr[i];
        }
      }
    return lar;
}
