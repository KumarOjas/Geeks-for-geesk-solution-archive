#include <iostream>
using namespace std;

int getLargest (int arr[],int n)
  
{
int largeest=0;
for (inti=1;i<n;i++)
  if (arr[i]>arr[largest])
    largest =i;
return largest;
}

int getSecondLargest(int arr[],int n)
{
  if (arr[i]!=arr[largest])
  {
  if (res ==-1)
    res=i;
  else if (arr[i]>arr[res])
    res=i;
  
  }
} 
  return res;
}

int main ()
{
int arr[]={10,518,20},n=4;
  cout<<"Index ="<<getSecondLargest(arr,n)<<endl;
}
  
  
  
  
