#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
    printf("Hello World\nPID=%d\n",getpid());
    fork();
    printf("Hello World\nPID=%d\n",getpid());
    return 0;

}