#include <iostrream>
using namespace std;

int maxProfit(int price[],int start,int end)
{
  if(end<=start)
  return 0;
  int profit=0;
  for (int i=start;i<end;i++)
  {
  for (int j=i+1;j<=end;j++)
  {
     if (price[j]>price[i])
  {
     int cur_profit  = price[j]-price[i]+
           maxProfit(price,start,i-1)+
           maxprofit(price,j+1,end);
     profit = max (profit,cur_profit);
     }
     }
     }
     return profit;
  }
  int main()
  {
  
     int price[]={1,58,12,3},start=0,end = 5;
     cout<<"Maximum Profit in Stock Market ="<<maxprofit(price,start,end)<<endl;
  
  }
  
  
  }



