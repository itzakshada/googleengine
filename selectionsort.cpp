#include<iostream>
#include<vector>
using namespace std;
void selectionSort( int arr[],int n)
{
  int i,j,min,temp;
  for(int i=0;i<n-1;i++)
  {
    min=i;
    for(int j=i+1;j<n;j++)
    {
      if(arr[j]<arr[min])
      {
        min=j;
      }
    temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
    }
    cout<<"Sorted elements in ascending order:";
for(int i=0;i<n;i++)
  cin>>arr[i];
cout<<"Sorted elements in descending order:";
for(int i=n-1;i>=0;i--)
  cin>>arr[i];
}
int main()
{
  int n;
  cout<<"enter the number of elements to sort: ";
  cin>>n;
  
  int arr[n];
  cout<<"enter the elements to be sort:";
  cin>>arr[n];

  selectionSort(arr,n);
  
  
}
