#include <bits/stdc++.h>
#define MAX 100

using namespace std;

void Display(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void findDuplicates(int *nums, int size)
{
  int slow=nums[0];
  int fast=nums[0];

  do
  {
    slow=nums[slow];
    fast=nums[nums[fast]];
  }while(slow!=fast);

  fast=nums[0];

  while(slow!=fast)
  {
    slow=nums[slow];
    fast=fast[nums];
  }

  cout<<"same element: "<<slow<<endl;

}

int main()
{
  int size;
  cout<<"Enter the size of array(The size must be below 100): ";
  cin>>size;
  if (size>100)
  {
    cout<<"Exceeded the size limit, Program aborted.";
    return 0;
  }

  int arr[MAX];
  for(int i =0;i<size;i++)
  {
    
    if(i==0)
    {
      cout<<"Enter 1st element: ";
      cin>>arr[i];
    }
    else if(i==1)
    {
      cout<<"Enter 2st element: ";
      cin>>arr[i];
    }
    else
    {
      cout<<"Enter "<<i+1<<"th element: ";
      cin>>arr[i];
    } 
  }
  findDuplicates(arr, size);
  Display(arr, size);
}