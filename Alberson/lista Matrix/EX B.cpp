#include <stdio.h>

int a[7], b[7], c[7][2];
int x, y;

main()
{

	for(x=0; x<7; x++)
	{	
		printf("a[%d]: ", x);
		scanf("%d", &a[x]);
	
	}

	for(x=0; x<7; x++)
	{
		printf("b[%d]: ", x);
		scanf("%d", &b[x]);		
		
	}


	for(x=0; x<2; x++)
	{
		for(y=0; y<7; y++)
		{
			if(x==0)
			{
				c[y][x] = a[y];
			}else if(x==1)
			{
				c[y][x] = b[y];
			}
		}
	}
	
	for(x=0; x<2; x++)
	{
		for(y=0; y<7; y++)
		{
			printf("\nc[%d][%d]: %d", x, y, c[y][x]);
		}
	}
	
}