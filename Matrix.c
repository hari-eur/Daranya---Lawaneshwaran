#include<stdio.h>
#define n 3
int main()
{
	int m,num;
	int arr[n][n];
	int i,j;
	printf("ENTER THE NUMBER TO BE REPLACED : ");
	scanf("%d",&m);
	

	printf("ENTER THE NUMBERS IN THE ARRAY : ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
			
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(m == arr[i][j] && i>0)
			{
				arr[i][j] = arr[i-1][j];
			}
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
