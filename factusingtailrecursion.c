// factorial using tail recursion
#include<stdio.h>
int factorial(int n,int a)
{
  if(n==1)
    return a;
  else
    return(factorial(n-1,n*a));
}
void main()
{
  int b,c;
  printf("Enter the number to do factorial: \n");
  scanf("%d",&b);
  c=factorial(b,1);
  printf("Factorial value is: %d \n",c);
  
}

