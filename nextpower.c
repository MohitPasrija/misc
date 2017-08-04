#include<stdio.h>

int next_power(int num)
{
int count=0;

if (num && !(num & (num-1)))
{
printf("Number entered is power of 2\n");
    return num;
}
while(num)
{
num = num >> 1;
count++;
}
printf("count valus is %d\n",count);
return (1<<count);
}

int main()
{
int num,power;
printf("Enter the number\n");
scanf("%d",&num);
power = next_power(num);
printf("Next power of 2 is %d",power);
}
