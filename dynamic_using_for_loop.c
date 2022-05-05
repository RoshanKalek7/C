#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size = 0;
	int *p = NULL;
	int iCnt = 0;
	
	printf("enter no of elements\n");
	scanf("%d",&size);
	
	p = (int *)malloc(size*sizeof(int));
	printf("please enter the elements\n");
	
	for(iCnt = 0; iCnt<size ; iCnt ++)
	{
		scanf("%d",&p[iCnt]);
	}
	printf("enter elements\n");
	
	for(iCnt = 0; iCnt<size ; iCnt ++)
	{
		scanf("%d",&p[iCnt]);
	}
	
	free(p);	
	return 0;
	
}