
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

// void rotate(int nums[], int size, int k)
// {

//   int nums_temp[size];
//   for(int i=0;i<size;i++)
//   {
//     nums_temp[i]=nums[i];
//   }

//   int count=0;
  
//   if(size%2==0)
//   {
//     for(int i=k;i<size;i++)
//     {
//     nums[count]=nums[i];
//     count++;
//     }
//   }
//   else
//   {
//     for(int i=k+1;i<size;i++)
//     {
//     nums[count]=nums[i];
//     count++;
//     }
//   }


//   int count_temp=0;
//   for(int i=count;i<size;i++)
//   {
//     nums[i]=nums_temp[count_temp];
//     count_temp++;
//   }
 
// }

void rotate(int *nums, int size)
{
  int count=0,count_same=0;
  for(int i=1;i<size;i++)
  {
    if(nums[i-1]>nums[i])
    {
      count++;
    }
    if(nums[i-1]==nums[i])
    {
      count_same++;
    }
  }
  if(nums[size-1]>nums[0])
    {
      count++;
    }
    if(count==1 || count_same>0)
    {
     cout<<"Array is sorted";
    }
    else
    {
      cout<<"NOT SORTED";
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
  rotate(arr, size);
  // Display(arr, size);
}