// Binary Search Algorithm

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

void Binary_Search(int *arr, int size, int element)
{
  int start =0,end=size-1;
  int mid=start + (end - start)/2; // TO prevent the value of mid to go out of scope of int.
  
  int check=0;
  while (start <= end)
  {
    if(arr[mid] == element)
    {
      cout<<"Element found at:"<<mid;
      check++;
      break;
    }
    else if(arr[mid] > element)
    {
      end = mid -1;
    }
    else if(arr[mid] < element)
    {
      start = mid + 1;
    }
    mid = start + (end - start)/2;;
  }
  if(check == 0)
  cout<<"Element not found";
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
  sort(arr, arr+size);
  cout<<"Enter the number to be searched: ";
  int element;
  cin>>element;
  Binary_Search(arr,size,element);
  // Display(arr, size);
}