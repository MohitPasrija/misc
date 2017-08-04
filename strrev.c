#include<stdio.h>
#include<string.h>
#include<ctype.h>

void my_strrev(char* str)
{
printf("String to check is %s\n",str);
char* start;
char* end;
char temp;
start = str;
end = str+strlen(str)-1;

if(start == NULL)
{
    printf("Empty String\n");
    return;
}

while(end > start)
{
    if(*start == *end)
    {
        printf("Start is %c\t",*start);
        printf("End is %c\t",*end);
        end--;
        start++;
    }
    else
    {
        printf("Input string is not palimdrome");
        return;
    }
}
    printf("Input string is palindorme\n");
}


int main()
{
char str[100];
printf("Enter the string to check\n");
fgets(str,100,stdin);
my_strrev(str);
}


