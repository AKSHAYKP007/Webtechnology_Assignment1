#include<stdio.h>
void main()
{
int a[10],n,i,*ptr;
printf("enter the limit:");
scanf("%d",&n);
printf("enter the elements oneby one:");
for(i=0;i<n;i++)
scanf("%d",a[i]);
ptr=a;
printf("enter the location:");
scanf("%d",&i);
printf("array element is:%d",*(ptr+(i-1)));
}