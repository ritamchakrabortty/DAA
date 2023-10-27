/** Enter a set of numbers and a target value. 
The output will give all the possible combinations of numbers within the set the sum of which will give the target value
*/
#include <stdio.h>
#include <stdlib.h>
static int total_nodes;
void printValues(int A[], int size){
   for (int i = 0; i < size; i++) {
      if(i!=size-1)
         printf("%d, ",A[i]);
      else
         printf("%d ",A[i]);
   }
   printf("\n");
}
void subset_sum(int s[], int t[], int s_size, int t_size, int sum, int ite, int const ts){
   total_nodes++;
   if (ts == sum) {
      printValues(t, t_size);
      subset_sum(s, t, s_size, t_size - 1, sum - s[ite], ite + 1, ts);
      return;
   }
   else {
      for (int i = ite; i < s_size; i++) {
         t[t_size] = s[i];
         subset_sum(s, t, s_size, t_size + 1, sum + s[i], i + 1, ts);
      }
   }
}
void generateSubsets(int s[], int size, int ts){
   int* arr = (int*)malloc(size * sizeof(int));
   subset_sum(s, arr, size, 0, 0, 0, ts);
   free(arr);
}
int main(){
    int n,total;
    printf("Enter the total number of elements in the set:\n ");
    scanf("%d",&n);
   int set[n];
   printf("Enter the elements of the set:\n ");
   for(int i=0;i<n;i++)
    scanf("%d",&set[i]); 
    printf("Enter the value of target sum:\n ");
     scanf("%d",&total);
   generateSubsets(set, n, total);
   printf("Total Nodes generated %d\n", total_nodes);
   return 0;
}