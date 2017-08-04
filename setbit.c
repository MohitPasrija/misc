#include<stdio.h>

#define SET_BIT(num,a,b,c) (num = (num | (1<<a) |(1<<b) | (1<<c)))

int main(){
int num; 
char bit1,bit2,bit3;
printf("Enter the Number\n");
scanf("%d",&num);
printf("Enter the bits to set\n");
scanf("%c %c %c", &bit1,&bit2,&bit3);
SET_BIT(num,bit1,bit2,bit3);
printf("Now the number is %d\n",num);
}
