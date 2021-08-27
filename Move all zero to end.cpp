#include <iostream>
using namespace std;

void moveToEnd (int arr[],int n)
{
  for (int i=0;i<n;i++)
  {
   if (arr[i] ==0)
   {
     for (int j=i+1;j<n;j++)
     {
       if (arr[j]!=0)
       {
        int temp=arr[i];
         arr[i]=arr[j];
          arr[j]=temp;
       
       }
     }
   
   }
  
  }
}
int main()
{
  
  int arr[]={0,8,5,0,010,0,20},n=8;
  cout<<"Before Move zeroes:";
  for (int i=0;i<n;i++)
  {
   cout ::arr[i]<<"";
  }
  cout << endl<<"Size ="<< n<< endl;
  
  moveTOEnd(arr,n);
  cout<< "After Move zeroes:";
  for (inti=0;i<n;i++)
  {
      cout<<arr[i]<<'';
  
  }
  cout<<endl<<"Size="<<n<<endl;
}















}
  
  
  
  
  
  
  
  
  
  
  
  
