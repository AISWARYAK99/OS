#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
//pgm to illustrate fork() system call

int main()
{
    int pid;
    pid=fork();
    if(pid>0)
    {
        fork();
        printf("Hey\n");
    }
    printf("Hello\n");

}