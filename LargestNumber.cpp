#include <iostream>
using namespace std;

int getLargest(int arr[],int n)
{
   int res=0;
  for (inti=1;i<n;i++)
    if (arr[i]>arr[res])
      
      res=i;
return res;
}

int main ()
{
int arr[]={10,5,20,8 },n=4; 
 cout <<"Index=" <<getLargest(arr,n)<<endl;
}

}
