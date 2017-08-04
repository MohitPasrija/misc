#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef char BOOL;

BOOL check_power(int n)
{
if(!n)
{
printf("Please enter a positive number\n");
return 0;
}

if(!(n&(n-1)))
    return TRUE;
else
    return FALSE;
}

int main()
{
int num;
BOOL result;
printf("Enter a number\n");
scanf("%d",&num);
result = check_power(num);
printf("%d",result);
return 0;
}
