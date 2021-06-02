#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void forkexample()
{
    //child process because return zero value
    if(fork()==0)
        printf("Hello from Child\n");
    //parent  process because return value non zero    
    else
        printf("Hello from parent\n");
    
}
int main()
{
    forkexample();
    return 0;
}