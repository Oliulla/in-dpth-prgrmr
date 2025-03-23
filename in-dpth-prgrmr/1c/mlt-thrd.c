#include <pthread.h>
#include <stdio.h>

void *print_message(void *arg) {
    printf("Hello from Thread!\n");
    return NULL;
}

int main() {
    // pthread_t thread;
    // pthread_create(&thread, NULL, print_message, NULL);
    // pthread_join(thread, NULL);

    pthread_mutex_t lock;
    pthread_mutex_init(&lock, NULL);

    pthread_mutex_lock(&lock);
    // Critical section
    pthread_mutex_unlock(&lock);
    pthread_mutex_destroy(&lock);
    
    return 0;
}
