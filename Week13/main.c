#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[30];
    double salary;
} Employee;

int main(void) {
    int capacity = 2;
    int count = 0;
    
    Employee *employees = malloc(capacity * sizeof(Employee));
    if (employees == NULL) {
        printf("Out of memory!\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        if (count == capacity) {
            capacity *= 2; // Double the capacity
            Employee *bigger = realloc(employees, capacity * sizeof(Employee));
            if (bigger == NULL) {
                printf("Reallocation failed!\n");
                free(employees);
                return 1;
            }
            employees = bigger;
            printf("Array capacity grown to %d slots\n", capacity);
        }
        employees[count].id = 1001 + i;
        sprintf(employees[count].name, "Employee%d", i + 1);
        employees[count].salary = 15000.00 + (i * 1500);
        count++;
    }

    printf("\n--- Dynamic Employee List ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Name: %s | Salary: N$%.2f\n", employees[i].id, employees[i].name, employees[i].salary);
    }

    free(employees);
    employees = NULL;

    return 0;
}