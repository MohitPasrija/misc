#include<stdio.h>

int my_strlen(const char* buffer)
{
if(!buffer){
	printf("Please enter a valid string\n");
return 0;
}
int len=0;
const char *temp = buffer;
while(*temp++)
	len++;

return len;	
}
int main()
{
int len=0;
len = my_strlen(NULL);
printf("Lenght is %d\n",len);
}
