#include<stdio.h>
int main()
{
	int w, n, a[20][20], wi[20], vi[20], i, j, ans[20]={0,0,0,0,0};
	//clrscr();
	printf(" Enter Number of Items: ");
	scanf("%d",&n);
	printf(" Enter Capacity: ");
	scanf("%d",&w);
	for(i=1;i<=n;i++)
	{
		printf(" Enter wi%d & vi%d: ",i,i);
		scanf("%d %d",&wi[i],&vi[i]);
	}
	for(i=0;i<=n;i++)
		for(j=0;j<=w;j++)
		{
			if(i==0 || j==0)
			{	a[i][j]=0;
				continue;
			}
			if(j<wi[i])
				a[i][j]=a[i-1][j];
			else
			{
				if(a[i-1][j]>vi[i]+a[i-1][j-wi[i]])
					a[i][j]=a[i-1][j];
				else
					a[i][j]=vi[i]+a[i-1][j-wi[i]];
			}
		}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=w;j++)
			printf(" %d ",a[i][j]);
		printf("\n");
	}
	i=n;
	j=w;
	while(i>0&&j>0)
	{
		if(a[i][j]!=a[i-1][j]&&i>0&&j>0)
		{
			ans[i]=1;
			j=j-wi[i];
			i--;
		}
		else
			i--;
	}
	for(i=1;i<=n;i++)
		printf("%d ",ans[i]);
	//getch();
	return 0;
}
