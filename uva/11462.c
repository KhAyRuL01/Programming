#include<stdio.h>
int main()
{
	int n,age[2000000],i,j,tmp;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
		break;
		for(i=0;i<n;i++)
		scanf("%d",&age[i]);
		for(i=0;i<n-1;i++)
		{
	     	for(j=i+1;j<n;j++)
     		{
		      	if(age[i]>age[j])
		      	{
		      		tmp=age[i];
		      		age[i]=age[j];
			      	age[j]=tmp;
	      		}
     		}
     		printf("%d ",age[i]);
		}
		printf("%d\n",age[i]);
	}
	return 0;
}
		