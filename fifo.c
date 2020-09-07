#include<stdio.h>
int search(int ele,int page[10],int n)
{
	int i,flag=0;
	printf("page frame");
	for(i=0;i<n;i++)
	printf(" %d  ",page[i]);
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(ele==page[i])
			flag=1;
			break;
	}
	if(flag==1)
	return 1;
	else
	return 0;
}
int main()
{
	int a[100],n,page[10],fsize,i,c=0,j=0,check,pagefaults=0;
	printf("enter nof of requests and frame size");
	scanf("%d%d",&n,&fsize);
	printf("enter request ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
                     check=search(a[i],page,fsize);
		if(check!=1)
		{
		          pagefaults++;
		          page[j]=a[i];
		          j++;
		         ++c;
	           }
	          if(c==fsize)
		{
			j=0;
			c=0;}
	}
	printf("no of page faults :%d",pagefaults);}

