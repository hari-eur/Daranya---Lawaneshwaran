#include<stdio.h>
int main(){
int n,j;
int a[10];
int i,n1,count=0,cnt=0,r=0;
printf("enter the number");
scanf("%d",&n);
while(n>0){
    a[count] = n%10;
    n = n/10;
    count++;
}
for(i=count-1;i>=0;i--){
    if(a[cnt]==a[i])
       cnt++;
    else 
       break;
}
if(cnt==count)
    printf("It is palindrome");
else
    printf("It is not a palindrome");
}

