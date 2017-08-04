#include <stdio.h>

void sum(int a, int b){
	printf("Sum is %d\n",a+b);
	}

void divide(int a, int b){
	printf("Divisor is %d\n",a/b);
	}
	
void multiply(int a, int b){
	printf("Multiplication is %d\n",a*b);
	}
	
void subtract(int a, int b){
	printf("Subtraction is %d\n",a-b);
	}	
	
void (*ptr[4]) (int,int) = {sum,divide,multiply,subtract};

int main()
{
	int a,b;
	int option;
	void (*func) (int,int);
	printf("Enter value of A & B\n");
	scanf("%d %d",&a,&b);
	printf("ENter option \n, 1 -Sum \n 2 - Divide\n 3-Multiply\n 4- Sub \n");
	scanf("%d",&option);
	if(option!=0 && option > -1 && option < 4){
		func = ptr[option];
		func(a,b);
		}
	}
