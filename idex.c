#include<stdio.h>
int main()
{
int m,n,pos;
int a[6]={4,6,8,7,9,12};
int b[5]={5,3,2,1,0};
int i,j;
printf("enter the position to insert");
scanf("%d",&pos);
for(i=0;i<pos-1;i++)
{
a[i]=a[i];
}
for(i=pos-1;i<11;i++)
{
for(j=0;j<5;j++)
{
 a[i]=b[j];
}
a[i]=a[i-5];
}
for(i=0;i<11;i++)
{
printf("%d",a[i]);
}
}
