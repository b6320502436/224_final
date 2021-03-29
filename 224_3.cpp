#include<stdio.h>
int  main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int A[a][a]={},B[b][b]={},C[c][c]={};
	int D[2*a+2]={},E[2*b+2]={},F[2*c+2]={};
	int e,f,g,h=0,i,j,k;
	for(e=0;e<a;e++)
	{
		for(f=0;f<a;f++)
	{
		scanf("%d",&A[e][f]);
		D[e]=A[e][f]+D[e];
		D[f+3]=A[e][f]+D[f+3];
		if(e==f)
		D[2*a+1]=D[2*a+1]+A[e][f];
		if(e+f==a)
		D[2*a+2]=D[2*a+1]+A[e][f];
	}
}
for(g=0;g<=2*a+2;g++)
{
	if(D[0]!=D[g])
	{
		h=1;
	}
}
if(h==0)
{
	printf("yes\n");
}
else printf("no\n");




	for(e=0;e<b;e++)
	{
		for(f=0;f<b;f++)
	{
		scanf("%d",&B[e][f]);
		E[e]=B[e][f]+E[e];
		E[f+3]=B[e][f]+E[f+3];
		if(e==f)
		E[2*a+1]=E[2*a+1]+B[e][f];
		if(e+f==a)
		E[2*a+2]=E[2*a+1]+B[e][f];
	}
}
		for(e=0;e<c;e++)
	{
		for(f=0;f<c;f++)
	{
		scanf("%d",&B[e][f]);
		F[e]=C[e][f]+F[e];
		F[f+3]=C[e][f]+F[f+3];
		if(e==f)
		F[2*a+1]=F[2*a+1]+C[e][f];
		if(e+f==a)
		F[2*a+2]=F[2*a+1]+C[e][f];
	}
}
	
	
	
}
