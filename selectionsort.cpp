#include<iostream>
#include<vector>
using namespace std;
void selectionSort( int arr[],int n)
{






  
cout<<"Sorted elements in ascending order:";
for(i=0;i<n;i++)
  cin>>arr[i];
cout<<"Sorted elements in descending order:";
for(i=n-1;i>=0;i--)
  cin>>arr[i];
}
int main(){
  int n;
  cout<<"enter the number of elements to sort: ";
  cin>>n;
  
  int arr[n];
  cout<<"enter the elements to be sort:";
  cin>>arr[n];

  selectionSort(arr,n);
  
  








  
}
