#include<stdio.h>
#define BYTE 8
#define INT_SIZE BYTE*sizeof(int)

int get_mask(int p1,int p2)
{
int mask,mask_p1,mask_p2;
mask p1 = (unsigned)~0u >> (INT_SIZE-p1-1);
mask p2 = (unsigned)~0u << (INT_SIZE-p2);
mask = p1 & p2 ;
}
