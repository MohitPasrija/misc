#include<stdio.h>
#include<malloc.h>

int main()
{
int r = 3, c = 4;
int count = 0;
int i,j;
int **arr = (int**)malloc(r * sizeof(int*));
for(i=0;i<c;i++)
arr[i]=(int*)malloc(c*sizeof(int));

for(i=0;i<r;i++)
    for(j=0;j<c;j++)
       * (*(arr+i)+j) = ++count;

for(i=0;i<r;i++)
    for(j=0;j<c;j++)
        printf("%d\t",arr[i][j]);
}
