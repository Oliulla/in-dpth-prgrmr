#include <stdio.h>
#include <unistd.h>
#include <sched.h>

void my_fork(void) {
    pid_t pid = fork();
    if (pid == 0) {
        printf("Child Process\n");
    } else {
        printf("Parent Process\n");
    }
}

void my_exec(void)
{
    execl("/bin/ls", "ls", "-l", NULL);
}

int main(void) {
    my_exec();

    return 0;
}
