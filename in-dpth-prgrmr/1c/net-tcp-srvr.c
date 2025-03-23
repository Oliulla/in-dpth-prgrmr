#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <netinet/in.h>

int main() {
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) {
        perror("Socket failed");
        exit(1);
    }
    
    struct sockaddr_in server;
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = INADDR_ANY;
    server.sin_port = htons(8080);

    if (bind(sockfd, (struct sockaddr *)&server, sizeof(server)) < 0) {
        perror("Bind failed");
        exit(1);
    }
    
    listen(sockfd, 5);
    printf("Server is listening on port 8080...\n");

    int client_sock;
    struct sockaddr_in client;
    socklen_t client_len = sizeof(client);
    
    client_sock = accept(sockfd, (struct sockaddr *)&client, &client_len);
    if (client_sock < 0) {
        perror("Accept failed");
        exit(1);
    }

    char buffer[1024];
    char *msg = "Hello, Client! Type 'exit' to quit.\n";
    send(client_sock, msg, strlen(msg), 0);

    while (1) {
        bzero(buffer, sizeof(buffer));
        int n = recv(client_sock, buffer, sizeof(buffer), 0);
        if (n <= 0) {
            break;  // Exit on client disconnection or error
        }
        printf("Client: %s\n", buffer);

        printf("Server: ");
        bzero(buffer, sizeof(buffer));
        fgets(buffer, sizeof(buffer), stdin);
        send(client_sock, buffer, strlen(buffer), 0);

        if (strncmp(buffer, "exit", 4) == 0) {
            break;  // Exit the chat if "exit" is sent
        }
    }

    close(client_sock);
    close(sockfd);
    return 0;
}
