#include <stdio.h>
#include <signal.h>

void handle_signal(int sig) {
    printf("Caught signal %d\n", sig);
}

int main() {
    signal(SIGINT, handle_signal);
    while (1);
}
