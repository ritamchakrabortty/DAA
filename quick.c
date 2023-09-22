//c prg to do quick sort of an unsorted array
#include<stdio.h>
#include<stdlib.h>
int partition(int *arr,int low,int up)
{
  int i,j,pivot,temp;
  pivot = arr[low];
  i = low+1;
  j = up;
  while(i<=j)
  {
    while((i<up) && (arr[i]<pivot))
      i++;
    while(arr[j]>pivot)
      j--;
    if(i<j)
    {
      temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
      i++;
      j--;
    }
    else
    {
      i++;
    }
  }
  arr[low]=arr[j];
  arr[j]=pivot;
  return j;
}
void quick(int *arr,int low,int up)
{
  int pos;
  if(low>=up)
    return;
  pos = partition(arr,low,up);
  quick(arr,low,pos-1);
  quick(arr,pos+1,up);
  
}
int main()
{
  int n;
  printf("Enter the size of the array: \n");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements of the array: \n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  quick(arr,0,n-1);
  for(int z=0;z<n;z++)
  {
    printf("%d ",arr[z]);
  }
  return 0;
}
