#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z;
printf("Enter the 3 num:");
scanf("%d%d%d",&x,&y,&z);
if(x>y&&x>z)
{
printf("x is big");
}else if(y>z)
{
printf("y is big");
}
else
{
printf("z is big");
}
getch();}
