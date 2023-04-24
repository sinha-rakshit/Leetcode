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

void check(int *nums)
{
  int size=4;
  int hash[MAX];
  memset(hash, 0, sizeof(hash));

  for(int i=0;i<size;i++)
  {
      hash[nums[i]]=hash[nums[i]]+1;
  }

  for(int i=0;i<size;i++)
  {
    int check=0;
    for(int j=0;j<nums[i]; j++)
    {
        check=hash[j]+check;
    }
    nums[i]=check;

  }
  Display(nums,size);
}

int main()
{
  int nums[4]={7,7,7,7};
  check(nums);
}
