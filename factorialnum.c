#include<stdio.h>
int main()
{
int fac,i,num;
fac=1;
i=1;
printf("enter the number to find it's factorial");
scanf("%d",&num);
while (num>=i)
 {
    fac=fac*i;
    i++;
 }
if (num==0)
 { printf("factorial = %d",fac);
 }
else
  {printf("factorial = %d",fac);
  }
}