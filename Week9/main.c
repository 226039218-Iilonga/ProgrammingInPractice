#include <stdio.h>
#include "employees.h"
#include "budget.h"
#include "utilities.h"
#include "reports.h"

int main(void)
{
    int choice;

    do {
        printf("\n====================================\n");
        printf(" MUNICIPAL FINANCIAL MANAGEMENT\n");
        printf("====================================\n");
        printf("1. Employee Operations\n");
        printf("2. Budget Operations\n");
        printf("3. Employee Report\n");
        printf("4. Budget Report\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee();
                listEmployees();
                break;
            case 2:
                addBudget();
                break;
            case 3:
                employeeReport();
                break;
            case 4:
                budgetReport();
                break;
            case 5:
                printf("Exiting MFMS. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 5);

    return 0;
}