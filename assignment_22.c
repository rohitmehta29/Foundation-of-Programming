#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[100], str2[100];
    int choice,len,result;
    
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    do{
        printf("\nMenu:\n");
        printf("1. Find the length of the first strings\n");
        printf("2. copy the first string into the second string\n");
        printf("3. Concatenate the first string with the second string\n");
        printf("4. Compare the first string with the second string\n");
        printf("5. Reverse the first string\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                len = strlen(str1);
                printf("Length of the first string: %d\n", len);
                break;
            case 2:
                strcpy(str2, str1);
                printf("After copying, second string: %s\n", str2);
                break;
            case 3:
                strcat(str1, str2);
                printf("After concatenation, first string: %s\n", str1);
                break;
            case 4:
                result = strcmp(str1, str2);
                if(result == 0) {
                    printf("Both strings are equal.\n");
                } else {
                    printf("Strings are not equal.\n");
                }
                break;
           
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    }
    while(choice != 6);
    return 0;
}