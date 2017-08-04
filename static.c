#include<stdio.h>

void f1()
{
static int i = 5;
}

int main()
{
printf("Value of is is %d\n",i);

}
