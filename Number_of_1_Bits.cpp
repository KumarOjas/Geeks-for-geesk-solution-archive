
class Solution
{
public:
    int setBits(int N)
    {
       int count =0;   
        while (N) { 
            N &=(N-1);
            count ++;
              
        } 
        return count; 
     }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}
