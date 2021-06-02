#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
//this pgm demonstrates a zombie process
//child become zombie as parent is sleeping and child process exits

int main()
{
   //fork returns process Id
    pid_t child_pid=fork();

    //parent process
    if(child_pid>6)
        sleep(50);
    //child process
    else
        exit(0);
    return 0;
}
