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

void shuffle(int *nums,int size)
{
  int temp_nums[size]={0};
  int j=0,k=1;
  // for(int i=0;i<size/2;i++)
  // {
  //   temp_nums[j]=nums[i];
  //   j=j+2;

  // }

  // j=1;

  // for(int i=size/2;i<size;i++)
  // {
  //   temp_nums[j]=nums[i];
  //   j=j+2;
  // }
  // nums=temp_nums;
  // Display(nums,size);
  
  for(int i=0;i<size;i++)
  {
    if(i<size/2)
    {
      temp_nums[j]=nums[i];
      j=j+2;
    }
    else
    {
      temp_nums[k]=nums[i];
      k=k+2;
    }
  }
  nums=temp_nums;

  Display(nums,size);
}




int main()
{
  int nums[]={1,2,3,4,4,3,2,1};
  int size=8;
  shuffle(nums,size);
  // Display(nums,size);
}
