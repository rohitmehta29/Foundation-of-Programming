#include <stdio.h>
#include <string.h>

#define MAX 100

// Structure definition
struct Employee {
    char name[50];
    char designation[50];
    char gender;
    char doj[15];   // Date of Joining
    float salary;
};

// Function prototypes
void totalEmployees(int n);
void countGender(struct Employee e[], int n);
void salaryAbove10000(struct Employee e[], int n);
void asstManager(struct Employee e[], int n);

int main() {
    struct Employee e[MAX];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Designation: ");
        scanf("%s", e[i].designation);

        printf("Gender (M/F): ");
        scanf(" %c", &e[i].gender);

        printf("Date of Joining (dd-mm-yyyy): ");
        scanf("%s", e[i].doj);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    // Function calls
    totalEmployees(n);
    countGender(e, n);
    salaryAbove10000(e, n);
    asstManager(e, n);

    return 0;
}

// a) Total number of employees
void totalEmployees(int n) {
    printf("\nTotal number of employees: %d\n", n);
}

// b) Count male and female employees
void countGender(struct Employee e[], int n) {
    int male = 0, female = 0, i;

    for(i = 0; i < n; i++) {
        if(e[i].gender == 'M' || e[i].gender == 'm')
            male++;
        else if(e[i].gender == 'F' || e[i].gender == 'f')
            female++;
    }

    printf("\nMale employees: %d", male);
    printf("\nFemale employees: %d\n", female);
}

// c) Employees with salary > 10000
void salaryAbove10000(struct Employee e[], int n) {
    int i;

    printf("\nEmployees with salary more than 10000:\n");

    for(i = 0; i < n; i++) {
        if(e[i].salary > 10000) {
            printf("%s - %.2f\n", e[i].name, e[i].salary);
        }
    }
}

// d) Employees with designation "Asst Manager"
void asstManager(struct Employee e[], int n) {
    int i;

    printf("\nEmployees with designation Asst Manager:\n");

    for(i = 0; i < n; i++) {
        if(strcmp(e[i].designation, "AsstManager") == 0 ||
           strcmp(e[i].designation, "Asst_Manager") == 0 ||
           strcmp(e[i].designation, "Asst") == 0) {
            printf("%s\n", e[i].name);
        }
    }
}