#include<stdio.h>
#include<conio.h>
int main()
{
int num,digitnum=0;
scanf("%d",&num);
while(num!=0)
{
num=num\10;
digitnum++;
}
printf("digit=%d",digitnum);
return 0;
}
