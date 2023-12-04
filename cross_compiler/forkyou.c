#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void try()
{
    if (fork() == 0) {
        printf("%d,Example\n",getpid());
        fork();
        fork();
        fork();
        return;
    }
    return;
}

int main()
{
    try();
    printf("%d, Example\n",getpid());
}
