#include <stdio.h>

int a[10], c[10][3];
int x, y, i;

main()
{

	for(x=0; x<10; x++)
	{	
		printf("a[%d]: ", x);
		scanf("%d", &a[x]);
	
	}


	for(x=0; x<3; x++)
	{
		for(y=0; y<10; y++)
		{
			if(x==0)
			{
				c[y][x] = a[y] + 5;
			}else
			{
				if(x==1)
				{
					if(a[y]==0)
					{ 
						c[y][x] = 1;
					}else
					{
						c[y][x] = 1;
						for(i=1; i<=a[y]; i++)
						{
							c[y][x]	= i * c[y][x];
						}
					}
				}else
				{
					if(x==2)
					{
						c[y][x] = a[y] * a[y];
					}
				}
			}
		}
	}
	
	for(y=0; y<3; y++)
	{
		for(x=0; x<10; x++)
		{
			printf("\nc[%d][%d]: %d", y, x, c[x][y]);
		}
	}
	
}