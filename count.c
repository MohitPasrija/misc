#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256

char max_freq(char *str)
{
   int count[ASCII_SIZE] = {0};
 
    // Construct character count array from the input
    // string.
    int len = strlen(str);
    for (int i=0; i<len; i++){
		printf("index is %d\n",count[str[i]]);
        count[str[i]]++;}
 
    int max = -1;  // Initialize max count
    char result;   // Initialize result
 
    // Traversing through the string and maintaining
    // the count of each character
    for (int i = 0; i < len; i++) {
        if (max < count[str[i]]) {
            max = count[str[i]];
            result = str[i];
        }
    }
 
    return result;	
}


int main()
{
	char str[100];
	char max;
	printf("Enter a string\n");
	gets(str);
	printf("You entered %s\n",str);
	printf("Max freq character is %c\n",max_freq(str));
	}
