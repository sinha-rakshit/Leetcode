// KADANE'S ALGORITHM

#include <bits/stdc++.h>

using namespace std;

void sum(int *arr, int size) //T(n)=O(NlogN), MAYBE WRONG
{
  sort(arr,arr+size);
  int sum=arr[size-1] + arr[size-2] + arr[size-3] + arr[size-4];
  cout<<sum;
}

void sum1(int *arr, int size)
{
  int sum=0;
  int max=INT_MIN;
  for(int i=0;i<size;i++)
  {
    sum += arr[i];
    if(sum>max)
    {
      max=sum;
    }
    if(sum<0)
    {
      sum=0;
    }
  }
  cout<<max;
}  




int main()
{
  int arr[]={-2,-1,-3,4,-1,2,1,-5,4};
  int size=sizeof(arr)/sizeof(int);
  sum1(arr,size);
}