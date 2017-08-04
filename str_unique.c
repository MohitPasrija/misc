#include <string.h>

#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define BOOL int

BOOL check_anagram(char* str1, char* str2){
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	
	if(len1 != len2){
		return FALSE;
		}
	
	for(int i=0;i<len1;i++){
		int j=0;
		printf("str2 len is now %d\n",len2);
		for(;j<len2;j++){
			printf("str1 is %c\t, and str2 is %c\n",str1[i] , str2[j]);
			if(str1[i] == str2[j]){
				for(int index=j;index<len2;index++){
					str2[j] = str2[j+1];
					printf("After copy str[%d] is %c\n",j,str2[j]);
					}
					str2[j+1]='\0';
					printf("str2 is now %s\n",str2);
				}
			}
		}
	if(str2 == NULL)
		return TRUE;
	else
		return FALSE;
	}
	
BOOL check_string(char* str){
	int len = strlen(str);
	printf("Input string len is %d\n",len);
	for(int i=0;i<(len-1);i++){
		for(int j = i+1; j <len; j++) {
			printf("%c\t, %c\n",str[i] , str[j]);
			if(str[i] == str[j])
				return 0;
			}
		}
	return 1;
	}

int main(){
	char str1[] = "mohit";
	char str2[] = "hoimt";
	BOOL res;
	//res = check_string(str);
	res = check_anagram(str1,str2);
	(res == 1 ? printf("STring is anagram\n") : printf("String is not anagram\n"));
	
	}
