#include <stdio.h>
#include <string.h>
#include "records.h"

int main(void) {
    Employee staff[3] = {
        {1001, "Maria", "Finance", 18500.50},
        {1002, "Simon", "HR", 17200.00},
        {1003, "Anna", "Engineering", 21000.75}
    };

    printf("%-6s %-12s %-15s %10s\n", "ID", "Name", "Dept", "Salary");
    printf("---------------------------------------------\n");
    
    double total = 0;
    for (int i = 0; i < 3; i++) {
        printf("%-6d %-12s %-15s N$%10.2f\n", staff[i].id, staff[i].name, staff[i].department, staff[i].salary);
        total += staff[i].salary;
    }
    printf("---------------------------------------------\n");
    printf("Total Payroll: N$%.2f\n", total);

    return 0;
}