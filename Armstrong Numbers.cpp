#include <bits/stdc++.h>

using namespace std;


class Solution {

  public:
  
  string armstrongNumber    (int n)
    {
        
    int temp = n, sum = 0;
    
    while (n != 0)
        {
    
      int r = n % 10;
      
      sum = sum + r * r * r;
      
      n /= 10;
        }
      
    if (temp == sum)
    
    {
    
      return "Yes";
      
    }
    
    else
    
      return "No";
    
  }
};

// { Driver Code Starts.
int main()

{

  int t;
  
  cin >> t;
    while (t--)
  
      
    {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}








}
