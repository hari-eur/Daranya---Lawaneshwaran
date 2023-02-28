#include<stdio.h>
int main(){
int a,b;
int a1,a2,a3;
scanf("%d",&a);
scanf("%d",&b);
a1 = a&&b;
a2 = a^b;
a3 = a||b;
printf("\n%d\n%d\n%d",a1,a2,a3);
}