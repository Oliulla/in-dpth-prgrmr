#include<stdio.h>

struct Employee {
    char name[50];
    int age;
    float salary;
};

int main() {
    struct Employee emp1 = {"John Doe", 30, 50000.50};
    printf("Name: %s, Age: %d, Salary: %.2f\n", emp1.name, emp1.age, emp1.salary);
}
