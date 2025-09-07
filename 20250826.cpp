#include <stdio.h>
int main()
{
	int a[100];
	int i=0;
	for(int row=1; ;row++)
	{
		for(int column=1;column<=row;column++)
		{
			if(row==1)
			{
				a[i]=1;
				printf("%d  ",a[i]);
				i++;
				break;
			}			
			if(column==1)
			{
				a[i]=1;
				printf("%d  ",a[i]);
				i++;
				continue;
			}
			if(column==row)
			{
				a[i]=1;
				printf("%d  ",a[i]);
				i++;
				continue;
			}
			if(i==100){return 0;}
			a[i]=a[i-row]+a[i-row+1];
			printf("%d  ",a[i]);
			i++;
		}
		printf("\n");
	}
	return 0;
}
