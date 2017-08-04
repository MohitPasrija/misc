#include <pthread.h>
#include <stdio.h>

void* print_function(void *arg)
{
	while(1)
		printf("0");
	}
	
int main(){
	pthread_t th1;
	pthread_create (&th1,NULL,&print_function,NULL);
	while(1)
		printf("1");
	}
	
	
