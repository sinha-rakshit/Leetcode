#include <bits/stdc++.h>
#define MAX 100

using namespace std;

// ALGORITHM IS SLOW BECAUSE OF THE FUNCTION(swap)

void new_arr(int *arr, int size, int *new_arr)
{
  for(int i=0;i<size;i++)
  {
    // new_arr[i]=arr[arr[i]];
    cout<<arr[arr[i]]<<endl;
  }
}

void Display(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
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

  int arr[MAX],new_arr[MAX];
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
  // Display(new_arr,size);

}

