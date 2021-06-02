#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

//pgm to demonstrate orphan process
//parent process finishes execution while child process is running.So child process become orphan

int main()
{
    //create a child process
    int pid=fork();

    if(pid>0)
        printf("In parent process");
    //pid is 0 in child process and negative if fork() fails
    else if(pid==0)
    {
        sleep(30);
        printf("In Child process");
    }
    return 0;
}