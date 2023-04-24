// DUTCH FLAG ALGORITHM

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

void sortnumbers1(int *nums, int size)
{
  int low=0;
  int mid=0;
  int high=size-1;
  while(mid<=high)
  {
    if(nums[mid]==0)
    {
      swap(nums[low++],nums[mid++]);
    }
    else if(nums[mid]==1)
    {
      mid++;
    }
    else if(nums[mid]==2)
    {
      swap(nums[mid],nums[high--]);
    }
  }
}

void sortnumbers2(int *nums, int size)
{
   int zero=0,one=0,two=0;

   for(int i=0;i<size;i++)
   {
    if(nums[i]==0)
    {
      zero++;
    }
    else if(nums[i]==1)
    {
      one++;
    }
    else
    {
      two++;
    }
   }

   for(int i=0;i<size;i++)
   {
    if(i<zero)
    {
      nums[i]=0;
    }
    else if(i-zero<one)
    {
      nums[i]=1;
    }
    else if(i-(zero+one)<two)
    {
      nums[i]=2;
    }


   }
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
  sortnumbers2(arr, size);
  Display(arr, size);
}