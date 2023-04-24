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

int first_occurence(int *arr, int size, int element)
{
  int start =0,end=size-1;
  int mid=start + (end - start)/2; // TO prevent the value of mid to go out of scope of int.
  int ans=-1;
  while (start <= end)
  {
    if(arr[mid] == element)
    {
      ans= mid;
      end= mid -1;
    }
    if(arr[mid] > element)
    {
      end = mid -1;
    }
    else if(arr[mid] < element)
    {
      start = mid + 1;
    }
    mid = start + (end - start)/2;;
  }
  return ans;
}

int last_occurence(int *arr, int size, int element)
{
  int start =0,end=size-1;
  int mid=start + (end - start)/2; // TO prevent the value of mid to go out of scope of int.
  int ans=-1;
  while (start <= end)
  {
    if(arr[mid] == element)
    {
      ans= mid;
      start= mid +1;
    }
    if(arr[mid] > element)
    {
      end = mid -1;
    }
    else if(arr[mid] < element)
    {
      start = mid + 1;
    }
    mid = start + (end - start)/2;;
  }
  return ans;
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
  Display(arr, size);
  int element;
  cout<<"Enter the element to be searched: ";
  cin>>element;
  int first=first_occurence(arr,size,element);
  if(first==-1)
  {
    cout<<"Element not found";
  }
  else{
    cout<<"Element occured first at: "<<first;
  }
  cout<<endl;
  int last=last_occurence(arr,size,element);
  if(last==-1)
  {
    cout<<"Element not found";
  }
  else{
    cout<<"Element occured first at: "<<last<<endl;;
  }
  int occurence = last-first+1;
  cout<<"Number of occurence:"<<occurence;

}

