#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[30];
    double salary;
} Employee;

void updateSalary(Employee *e, double newSalary) {
    e->salary = newSalary;
}

int main(void) {
    Employee emp = {1001, "Maria", 18500.50};

    printf("Before update: %s earns N$%.2f\n", emp.name, emp.salary);
    
    updateSalary(&emp, 20350.55);

    printf("After update : %s earns N$%.2f\n", emp.name, emp.salary);

    return 0;
}