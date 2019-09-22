#include<stdio.h>
void main()
{
int t;
scanf("%d",&t);
while(t-->0)
{
int num;
int count=0;
scanf("%d",&num);
int g=num;
if(num & 1==1)
count=1;
else
{
while(num>0)
{
num=num>>1;
count++;
if(num&1==1)
{
count++;
break;
}
}
}
printf("%d\n",count);
}
}
