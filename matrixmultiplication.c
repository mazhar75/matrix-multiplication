#include<stdio.h>
#define max 50
int main()
{int a[max][max],b[max][max],c[max][max];
int araw,acul,braw,bcul;
int i,j,k;
int sum=0;

printf("Enter the a matrix raw and culumn:");
scanf("%d %d",&araw,&acul);
printf("Enter the matrix a:\n");
for(i=0;i<araw;i++)
{for(j=0;j<acul;j++)
scanf("%d",&a[i][j]);
}
printf("Enter the b matrix raw and culumn:");
scanf("%d %d",&braw,&bcul);
if(acul!=braw)
{printf("sorry! the matrices cann't possible to multiply.");}
else{
printf("Enter the matrix b:\n");
for(i=0;i<braw;i++)
{for(j=0;j<bcul;j++)
{scanf("%d",&b[i][j]);}
}
}
printf("\n");
for(i=0;i<araw;i++)
{for(j=0;j<bcul;j++)
{for(k=0;k<braw;k++)
{sum += a[i][k]*b[k][j];
}c[i][j]=sum;
sum=0;
}}
printf("Resultant matrix:\n");
for(i=0;i<araw;i++)
{for(j=0;j<bcul;j++)
{printf("%d ",c[i][j]);}
printf("\n");
}
return 0;
}
