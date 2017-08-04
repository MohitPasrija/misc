#include<stdio.h>

int main()
{
	int count;
	char c;
	while((c = getchar()) != EOF){
		putchar(c);
		count++;
	}
	printf("YOu entered %d characters\n",count);
}
