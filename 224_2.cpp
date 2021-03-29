#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int A[a]={},b,c,d,e,f,g,B[1000]={},max=0;
	for(b=0;b<a;b++)
	{
		scanf(" %d",&A[b]);
		B[A[b]]++;
		
	}
	for(b=0;b<1000;b++)
	{
		if(B[b]>=max)
		{
			max=B[b];
			d=b;
		}
	}
	for(b=0;b<1000;b++)
	{
		if(B[b]==max)
		printf("%d ",b);
	}
	
	
}
