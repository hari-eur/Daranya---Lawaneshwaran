#include <stdio.h>
int main() {
   int n,i;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
       if((arr[i]%2)==0){
           printf("\nEven Number\n");
       }
       else{
           printf("\nOdd Number\n");
       }
       }
   }

