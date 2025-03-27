#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0) {
        perror("Socket failed");
        exit(1);
    }

    struct sockaddr_in server;
    server.sin_family = AF_INET;
    server.sin_port = htons(8080);
    server.sin_addr.s_addr = inet_addr("127.0.0.1");

    if (connect(sock, (struct sockaddr *)&server, sizeof(server)) < 0) {
        perror("Connection failed");
        exit(1);
    }

    char buffer[1024];
    int n;
    
    // Receive welcome message from the server
    n = recv(sock, buffer, sizeof(buffer), 0);
    buffer[n] = '\0';  // Null terminate the string
    printf("Server: %s", buffer);

    while (1) {
        printf("Client: ");
        bzero(buffer, sizeof(buffer));
        fgets(buffer, sizeof(buffer), stdin);
        send(sock, buffer, strlen(buffer), 0);

        if (strncmp(buffer, "exit", 4) == 0) {
            break;  // Exit the chat if "exit" is sent
        }

        bzero(buffer, sizeof(buffer));
        n = recv(sock, buffer, sizeof(buffer), 0);
        if (n <= 0) {
            break;
        }
        printf("Server: %s", buffer);
    }

    close(sock);
    return 0;
}
