#include <stdio.h>
#include<string.h>
int main() {
   int n,i;
   scanf("%d",&n);
   char ar[n];
    scanf("%s",ar);
    for(i=0;i<strlen(ar);i++){
        if((ar[i] >= 65 && ar[i] <= 90)
        || (ar[i] >= 97 && ar[i] <= 122)){
        printf("\nit is a valid\n");
        }
        else{
            printf("\nit is an invalid character\n");
        }
}}

