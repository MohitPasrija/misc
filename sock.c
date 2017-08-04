#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <time.h>
#include <unistd.h>
#include <fcntl.h>


void main()
{

    int listenfd = 0, connfd = 0;
    struct sockaddr_in serv_addr; 

    char sendBuff[1025];
    time_t ticks; 
    int val;
    listenfd = socket(AF_INET, SOCK_STREAM, 0);
    memset(&serv_addr, '0', sizeof(serv_addr));
    memset(sendBuff, '0', sizeof(sendBuff)); 

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    serv_addr.sin_port = htons(5000); 

    bind(listenfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr)); 

    listen(listenfd, 10); 

    fcntl(listenfd,F_SETFD,val);

    fcntl(listenfd,F_SETFL, O_NONBLOCK);
	
    while(1)
    {
        printf("Inside while 1 \n");
        connfd = accept(listenfd, (struct sockaddr*)NULL, NULL); 
        printf("Calling fcntl \n");
	fcntl(connfd,F_SETFL,val);

        read(connfd, sendBuff, sizeof(sendBuff)); 

        close(connfd);
        sleep(1);
     }

}
