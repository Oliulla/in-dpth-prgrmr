# 🚀 **C Intermediate to Advanced Topics**

Now that you've covered **C fundamentals**, let's move to **Intermediate to Advanced** topics. This includes **advanced memory management, multithreading, networking, system programming, and debugging tools**.

---

## 📌 **Step 1: Advanced Pointers & Function Pointers (1 Week)**

💡 **Goal:** Master complex pointer usage, pointer arithmetic, and function pointers.

✅ **Pointer to Pointer (`**`)\*\*

```c
int num = 10;
int *ptr = &num;
int **doublePtr = &ptr;

printf("Value of num: %d\n", **doublePtr); // 10
```

✅ **Function Pointers (Passing Functions as Arguments)**

```c
#include <stdio.h>

void greet() {
    printf("Hello, World!\n");
}

void executeFunction(void (*func)()) {
    func(); // Call the function via pointer
}

int main() {
    executeFunction(greet);
}
```

✅ **Array of Function Pointers**

```c
int add(int a, int b) { return a + b; }
int multiply(int a, int b) { return a * b; }

int main() {
    int (*operations[2])(int, int) = { add, multiply };
    printf("Addition: %d\n", operations[0](10, 5));
}
```

✅ **Memory Management: Avoiding Dangling Pointers**

```c
int *ptr = (int *)malloc(sizeof(int));
free(ptr);
ptr = NULL;  // Prevents dangling pointer
```

---

## 📌 **Step 2: Memory Management & Debugging (1 Week)**

💡 **Goal:** Master **heap allocation, memory leaks, and debugging with Valgrind & GDB**.

✅ **Using `calloc`, `realloc`**

```c
int *arr = (int *)calloc(5, sizeof(int)); // Zero-initialized
arr = (int *)realloc(arr, 10 * sizeof(int)); // Resize memory
free(arr);
```

✅ **Detect Memory Leaks with Valgrind (Linux/Mac)**

```sh
gcc -g program.c -o program
valgrind --leak-check=full ./program
```

✅ **Using GDB for Debugging**

```sh
gcc -g program.c -o program
gdb ./program
```

```gdb
break main   # Set a breakpoint at main
run          # Start execution
print var    # Inspect variables
next         # Step to next line
```

---

## 📌 **Step 3: Multithreading & Concurrency (2 Weeks)**

💡 **Goal:** Learn to write **multi-threaded programs using POSIX Threads (`pthread`)**.

✅ **Creating Threads (`pthread_create`)**

```c
#include <pthread.h>
#include <stdio.h>

void *print_message(void *arg) {
    printf("Hello from Thread!\n");
    return NULL;
}

int main() {
    pthread_t thread;
    pthread_create(&thread, NULL, print_message, NULL);
    pthread_join(thread, NULL);
}
```

✅ **Using Mutex for Synchronization**

```c
pthread_mutex_t lock;
pthread_mutex_init(&lock, NULL);

pthread_mutex_lock(&lock);
// Critical section
pthread_mutex_unlock(&lock);
pthread_mutex_destroy(&lock);
```

✅ **Race Conditions & Deadlocks**

- **Race Condition:** Two threads modifying the same data at the same time.
- **Deadlock:** Two threads waiting for each other's resources.

---

## 📌 **Step 4: Networking in C (Sockets, HTTP, TCP/UDP) (2 Weeks)**

💡 **Goal:** Learn **low-level networking** concepts & build simple network applications.

✅ **Basic TCP Server in C**

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <netinet/in.h>

int main() {
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);

    struct sockaddr_in server;
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = INADDR_ANY;
    server.sin_port = htons(8080);

    bind(sockfd, (struct sockaddr *)&server, sizeof(server));
    listen(sockfd, 5);

    int client = accept(sockfd, NULL, NULL);
    char *msg = "Hello, Client!";
    send(client, msg, strlen(msg), 0);
}
```

✅ **Basic TCP Client in C**

```c
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>

int main() {
    int sock = socket(AF_INET, SOCK_STREAM, 0);

    struct sockaddr_in server;
    server.sin_family = AF_INET;
    server.sin_port = htons(8080);
    server.sin_addr.s_addr = inet_addr("127.0.0.1");

    connect(sock, (struct sockaddr *)&server, sizeof(server));

    char buffer[1024] = {0};
    recv(sock, buffer, 1024, 0);
    printf("Server: %s\n", buffer);
}
```

✅ **UDP vs TCP Sockets**

- **TCP:** Reliable, connection-oriented (e.g., Web, FTP)
- **UDP:** Faster, connectionless (e.g., Video Streaming, DNS)

---

## 📌 **Step 5: System Programming (Linux Syscalls) (2 Weeks)**

💡 **Goal:** Learn **low-level Linux system calls like `fork`, `exec`, pipes, signals**.

✅ **Forking a Process (`fork()`)**

```c
#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();
    if (pid == 0) {
        printf("Child Process\n");
    } else {
        printf("Parent Process\n");
    }
}
```

✅ **Executing a New Process (`exec()`)**

```c
#include <stdio.h>
#include <unistd.h>

int main() {
    execl("/bin/ls", "ls", "-l", NULL);
}
```

✅ **Interprocess Communication (Pipes)**

```c
int fd[2];
pipe(fd);
```

✅ **Handling Signals (`SIGINT`, `SIGKILL`)**

```c
#include <stdio.h>
#include <signal.h>

void handle_signal(int sig) {
    printf("Caught signal %d\n", sig);
}

int main() {
    signal(SIGINT, handle_signal);
    while (1);
}
```

---

## 📌 **Step 6: CMake & Build Systems (1 Week)**

💡 **Goal:** Learn how to structure large C projects and use `Makefiles` & `CMake`.

✅ **Basic Makefile**

```Makefile
all:
    gcc main.c -o program
```

✅ **Using CMake for Larger Projects**

```cmake
cmake_minimum_required(VERSION 3.10)
project(MyProject)
add_executable(myprogram main.c)
```

---

# 🎯 **C Intermediate to Advanced Study Plan**

| Step          | Topic                                 | Duration    |
| ------------- | ------------------------------------- | ----------- |
| ✅ **Step 1** | Advanced Pointers & Function Pointers | **1 Week**  |
| ✅ **Step 2** | Memory Management & Debugging         | **1 Week**  |
| ✅ **Step 3** | Multithreading & Concurrency          | **2 Weeks** |
| ✅ **Step 4** | Networking in C (Sockets, TCP/UDP)    | **2 Weeks** |
| ✅ **Step 5** | System Programming (Linux Syscalls)   | **2 Weeks** |
| ✅ **Step 6** | Build Systems (Makefiles & CMake)     | **1 Week**  |

⏳ **Total: 9-10 Weeks** (Studying 1-2 hours daily)

---

## 🚀 **Next Steps After C Advanced**

Once you master C, you can explore:

- **Cybersecurity** → Reverse Engineering, Exploit Development
- **Embedded Systems** → Microcontrollers, Device Drivers
- **Compiler Development** → Write Your Own Compiler
- **Linux Kernel Development** → Contribute to Linux Kernel

---

## 🎯 **Final Notes**

- Practice **real-world projects** (e.g., build a simple Web Server, Chat App, or File System).
- Use **LeetCode & Codeforces** for **DSA problems in C**.
- Read **"The C Programming Language" by K&R** for in-depth knowledge.

Let me know if you want **project ideas** or **interview questions** to practice! 🚀
