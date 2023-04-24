#include <bits/stdc++.h>
#define MAX 100

using namespace std;



void distance(int *arr, int size)
{
  int start, destination;
  cout<<"Enter the start location: ";
  cin>>start;
  cout<<"Enter the end location: ";
  cin>>destination;

  if(start>=size || destination>=size || start<0 || destination<0)
  {
    exit(1);
  }

  int total_distance=0,clockwise_distance=0,anticlockwise_distance=0;
  for(int i=0;i<size;i++)
  {
    total_distance=total_distance+arr[i];
  }
  
  // if(start<destination)
  // {
  //   for(int i=start;i<destination;i++)
  //   {
  //     clockwise_distance=clockwise_distance+arr[i];
  //   }
  // }
  // else if(start>destination)
  // {
  //   for(int i=start;i>destination;i--)
  //   {
  //     clockwise_distance=clockwise_distance+arr[i];
  //   }
  // }
  // else
  // {
  //   cout<<"Distance between nodes: "<<0;
  // }

  if(start>destination)
  {
    int temp;
    temp=start;
    start=destination;
    destination=temp;
  }

  for(int i=start;i<destination;i++)
  {
    clockwise_distance=clockwise_distance+arr[i];
  }

  anticlockwise_distance=total_distance-clockwise_distance;

  if(anticlockwise_distance>clockwise_distance)
  {
    cout<<"Distance between nodes: "<<clockwise_distance;
  }
  else
  {
    cout<<"Distance between nodes: "<<anticlockwise_distance;
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
  distance(arr,size);
  // Display(arr,size);

}

