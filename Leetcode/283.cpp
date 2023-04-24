
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

void move_zeroes(int arr[], int size)
{
  int non_zeroes=0;
  for (int i = 0; i < size;i++)
  {
    if(arr[i]!=0)
    {
      arr[non_zeroes]=arr[i];
      non_zeroes++;
    }
  }

  for(int i=non_zeroes;i<size;i++)
  {
    arr[i]=0;
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
  move_zeroes(arr, size);
  Display(arr, size);
}