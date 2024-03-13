#include <stdio.h>
#include <string.h>
struct Employee {
    int empid;
    char empname[20];
    char empemail[20];
    char empcontact[15];
    float empsalary;
}; struct Employee employees[MAX_EMPLOYEES];


void addEmployee() {
    if 
	(employeeCount<MAX_EMPLOYEES) {
        printf("Enter Employee Details:\n");
        printf("Employee ID: ");
        scanf("%d", &employees[employeeCount].empid);
        printf("Employee Name: ");
        scanf("%s", employees[employeeCount].empname);
        printf("Employee Email: ");
        scanf("%s", employees[employeeCount].empemail);
        printf("Employee Contact: ");
        scanf("%s", employees[employeeCount].empcontact);
        printf("Employee Salary: ");
        scanf("%f", &employees[employeeCount].empsalary);

        employeeCount++;
        printf("Employee added successfully!\n");
    } else {
        printf("Maximum number of employees reached!\n");
    }
}

void displayAllEmployees() {
    if (employeeCount > 0) {
        printf("Employee Details:\n");
        for (int i = 0; i < employeeCount; i++) {
            printf("Employee ID: %d\n", employees[i].empid);
            printf("Name: %s\n", employees[i].empname);
            printf("Email: %s\n", employees[i].empemail);
            printf("Contact: %s\n", employees[i].empcontact);
            printf("Salary: %.2f\n", employees[i].empsalary);
            printf("--------------------\n");
        }
    } else {
        printf("No employees found!\n");
    }
}

void searchEmployeeById() {
    int id;
    printf("Enter the Employee ID to search: ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < employeeCount; i++) {
        if (employees[i].empid == id) {
            printf("Employee found!\n");
            printf("Employee ID: %d\n", employees[i].empid);
            printf("Name: %s\n", employees[i].empname);
            printf("Email: %s\n", employees[i].empemail);
            printf("Contact: %s\n", employees[i].empcontact);
            printf("Salary: %.2f\n", employees[i].empsalary);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Employee not found!\n");
    }
}

void updateEmployeeByName() {
    char name[50];
    
    printf("Enter the Employee Name to update: ");
    scanf("%s",name);

    int found = 0;
    for (int i = 0; i < employeeCount; i++) {
        if (strcmp(employees[i].empname, name) == 0) {
            printf("Enter the new details for Employee %s:\n", name);
            printf("Employee ID: ");
            scanf("%d", &employees[i].empid);
            printf("Employee Email: ");
            scanf("%s", employees[i].empemail);
            printf("Employee Contact: ");
            scanf("%s", employees[i].empcontact);
            printf("Employee Salary: ");
            scanf("%f", &employees[i].empsalary);
            printf("Employee details updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Employee not found!\n");
    }
}

void deleteEmployeeByEmail() {
    char email[50];
    printf("Enter the Employee Email to delete: ");
    scanf("%s", email);

    int found = 0;
    for (int i = 0; i < employeeCount; i++) {
        if (strcmp(employees[i].empemail, email) == 0) {
            for (int j = i; j < employeeCount - 1; j++) {
                employees[j] = employees[j + 1];
            }
            employeeCount--;
            printf("Employee deleted successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Employee not found!\n");
    }
}

void displayEmployeeCount() {
    printf("Total Employees: %d\n", employeeCount);
}

void displayEmployeesBySalaryAsc() {
    struct Employee temp;
    for (int i = 0; i < employeeCount - 1; i++) {
        for (int j = 0; j < employeeCount - 1 - i; j++) {
            if (employees[j].empsalary > employees[j + 1].empsalary) {
                temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }

    printf("Employees sorted by salary (ascending):\n");
    for (int i = 0; i < employeeCount; i++) {
        printf("Employee ID: %d, Name: %s, Salary: %.2f\n", employees[i].empid, employees[i].empname, employees[i].empsalary);
    }
}

void displayHighestSalaryEmployee() {
    if (employeeCount > 0) {
        float maxSalary = employees[0].empsalary;
        int index = 0;
        for (int i = 1; i < employeeCount; i++) {
            if (employees[i].empsalary > maxSalary) {
                maxSalary = employees[i].empsalary;
                index = i;
            }
        }

        printf("Employee with the highest salary:\n");
        printf("Employee ID: %d, Name: %s, Salary: %.2f\n", employees[index].empid, employees[index].empname, employees[index].empsalary);
    } else {
        printf("No employees found!\n");
    }
}

void displayEmployeesWithinSalaryRange() {
    float minSalary, maxSalary;
    printf("Enter the minimum salary: ");
    scanf("%f", &minSalary);
    printf("Enter the maximum salary: ");
    scanf("%f", &maxSalary);

    printf("Employees within salary range %.2f to %.2f:\n", minSalary, maxSalary);
    for (int i = 0; i < employeeCount; i++) {
        if (employees[i].empsalary >= minSalary && employees[i].empsalary <= maxSalary) {
            printf("Employee ID: %d, Name: %s, Salary: %.2f\n", employees[i].empid, employees[i].empname, employees[i].empsalary);
        }
    }
}

float getMinimumSalary() {
    float minSalary = employees[0].empsalary;
    for (int i = 1; i < employeeCount; i++) {
        if (employees[i].empsalary < minSalary) {
            minSalary = employees[i].empsalary;
        }
    }
    return minSalary;
}

float getMaximumSalary() {
    float maxSalary = employees[0].empsalary;
    for (int i = 1; i < employeeCount; i++) {
        if (employees[i].empsalary > maxSalary) {
            maxSalary = employees[i].empsalary;
        }
    }
    return maxSalary;
}

int main() 
{
    int choice;

    do {
        printf("\nMenu\n");
        printf("1. Add Employee Details\n");
        printf("2. Display All Employee Details\n");
        printf("3. Search Employee By ID\n");
        printf("4. Update Employee Details By Name\n");
        printf("5. Delete Employee Details By Email\n");
        printf("6. Display Number of Employees in Company\n");
        printf("7. Display Employees Sorted by Salary (Ascending)\n");
        printf("8. Display Employee with the Highest Salary\n");
        printf("9. Display Employees within Salary Range\n");
        printf("10. Exit\n");
        
        printf("Enter your choice: ");
        scanf("%d",&choice)
          

        switch (choice) 
		{
            case 1:
                addEmployee();
                break;
            case 2:
                displayAllEmployees();
                break;
            case 3:
                searchEmployeeById();
                break;
            case 4:
                updateEmployeeByName();
                break;
            case 5:
                deleteEmployeeByEmail();
                break;
            case 6:
                displayEmployeeCount();
                break;
            case 7:
                displayEmployeesBySalaryAsc();
                break;
            case 8:
                displayHighestSalaryEmployee();
                break;
            case 9:
                displayEmployeesWithinSalaryRange();
                break;
            case 10:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 10.\n");
        }
    } while (choice != 10);

    return 0;
}

