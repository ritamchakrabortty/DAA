#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int a[]={4,7,9,15,21,33,56,78,99};
int N = 9;
int LinearSearch(int x)
{
  int c = 0;
  for(int i=0;i<N;i++)
  {
    c++;
    if(a[i]==x)
    break;
    
    
  }
  return c;
}
int BinarySearch(int x)
{
  int c1=0;
  int high = N-1;
  int low=0;
  int mid;
  while(low<=high)
  {
    mid=(high+low)/2;
    c1++;
    if(a[mid]==x)
    {
      break;
    }
    c1++;
    if(a[mid]>x)
    {
      high=mid-1;
    }
    else
    {
      low=mid+1;
    }
    
  }
  return c1;
}
int main()
{
  int v1=0,v2=0,n;
  printf("Enter the number you want to search:\n");
  scanf("%d",&n);
  v1=LinearSearch(n);
  v2=BinarySearch(n);
  if(v1>=v2)
  {
    printf("Binary search is better than linear search.\n");
    
  }
  else
  {
    printf("Linear search is better than binary search.\n");
  }
  return 0;
}
