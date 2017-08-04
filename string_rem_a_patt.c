#include<stdio.h>
#include<string.h>
int main()
{
int n=0,m=0;
char str[50];
printf("enter a string\n");
fgets(str,50,stdin);

	while(str[n])
	{
		if(str[n] =='a'){
			if(str[n+1] =='b'){
			    str[n] = 'c';
                            strcpy((char*)str[n],(char*)str[n+1]);

			}
		}
//	printf("after replce now strin is %s\n",str);
	n++;
	}
    printf("now strin is %s\n",str);
}
