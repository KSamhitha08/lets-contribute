#include<stdio.h>
int main()
{
	int n,r,c,s,b;
	printf("Enter the number of rows/co-efficients");
	scanf("%d",&n);
	for(r=0;r<n;r++)
	{
		for(s=1;s<n-r;s++)
		printf(" ");
		b=1;
		for(c=0;c<=r;c++)
		{
			 if (c!=0&&r!=0)
			 {
			 	b=b*(r-c+1)/c;
			 }
			 printf("%4d",b);

		}
          printf("\n");

	}   

}
