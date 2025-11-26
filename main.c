#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int id;
    char name[20];
    int salary;
} Employee;
int main() {
    Employee e1, e2, e3, high;
    printf("Enter details of employee 1:\n");
    printf("ID: ");
    scanf("%d", &e1.id);
    printf("Name: ");
    scanf("%s", e1.name);
    printf("Salary: ");
    scanf("%d", &e1.salary);
    printf("Enter details of employee 2:\n");
    printf("ID: ");
    scanf("%d", &e2.id);
    printf("Name: ");
    scanf("%s", e2.name);
    printf("Salary: ");
    scanf("%d", &e2.salary);
    printf("Enter details of employee 3:\n");
    printf("ID: ");
    scanf("%d", &e3.id);
    printf("Name: ");
    scanf("%s", e3.name);
    printf("Salary: \n");
    scanf("%d", &e3.salary);
    high = e1;
    if (e2.salary > high.salary) {
        high = e2;
    }
    if (e3.salary > high.salary) {
        high = e3;
    }
    printf("\nEmployee with highest salary:\n");
    printf("ID: %d\n", high.id);
    printf("Name: %s\n", high.name);
    printf("Salary: %d\n", high.salary);

    return 0;
}
