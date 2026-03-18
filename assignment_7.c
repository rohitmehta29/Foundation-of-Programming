#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks[3];
    float total;
    float percentage;
    char grade;
};

int main() {
    struct Student s[100];
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);  // allows spaces

        printf("Enter marks of 3 subjects:\n");
        s[i].total = 0;

        for(j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].percentage = s[i].total / 3;

        // Grade calculation
        if(s[i].percentage >= 90)
            s[i].grade = 'A';
        else if(s[i].percentage >= 75)
            s[i].grade = 'B';
        else if(s[i].percentage >= 60)
            s[i].grade = 'C';
        else if(s[i].percentage >= 50)
            s[i].grade = 'D';
        else
            s[i].grade = 'F';
    }

    // Display Results
    printf("\n===== STUDENT RESULTS =====\n");

    for(i = 0; i < n; i++) {
        printf("\nRoll No: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nTotal Marks: %.2f", s[i].total);
        printf("\nPercentage: %.2f%%", s[i].percentage);
        printf("\nGrade: %c\n", s[i].grade);
    }

    return 0;
}
