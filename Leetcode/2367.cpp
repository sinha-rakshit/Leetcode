#include <bits/stdc++.h>

using namespace std;

void arithmetic_triplets(int *nums, int diff)
{
  int size=6;
  int final_check=0;
  for(int i=0;i<size;i++)
  {
    int check1=nums[i]+diff;
    int check2=check1+diff;
    // cout<<check1<<" "<<check2;
    int check_loop=0;
    for(int j=0;j<size;j++)
    {
      if(j==i)
      {
        continue;
      }
      if(nums[j]==check1)
      {
        check_loop++;
        // cout<<check_loop;
      }
      if(nums[j]==check2)
      {
        check_loop++;
      }
    }
      if(check_loop>1)
      {
        final_check++;
      }
  }
  cout<<final_check;

  

}

int main()
{
  int nums[6]={0,1,4,6,7,10};
  int diff=3;
  arithmetic_triplets(nums,diff);
}