#include <stdio.h>

int main() {
    char str1[100], str2[100], sub[100];
    int choice, i, len, flag, j, found;

    printf("\n--- STRING OPERATIONS MENU ---\n");
    printf("1. Length of String\n");
    printf("2. Equality Check\n");
    printf("3. String Reversal\n");
    printf("4. Check Substring\n");
    printf("5. Check Palindrome\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1: // Length
            printf("Enter a string: ");
            scanf("%s", str1);

            len = 0;
            while(str1[len] != '\0') {
                len++;
            }

            printf("Length = %d", len);
            break;

        case 2: // Equality
            printf("Enter first string: ");
            scanf("%s", str1);

            printf("Enter second string: ");
            scanf("%s", str2);

            i = 0; flag = 1;
            while(str1[i] != '\0' || str2[i] != '\0') {
                if(str1[i] != str2[i]) {
                    flag = 0;
                    break;
                }
                i++;
            }

            if(flag)
                printf("Strings are equal");
            else
                printf("Strings are not equal");
            break;

        case 3: // Reverse
            printf("Enter a string: ");
            scanf("%s", str1);

            len = 0;
            while(str1[len] != '\0') {
                len++;
            }

            printf("Reversed string: ");
            for(i = len - 1; i >= 0; i--) {
                printf("%c", str1[i]);
            }
            break;

        case 4: // Substring
            printf("Enter main string: ");
            scanf("%s", str1);

            printf("Enter substring: ");
            scanf("%s", sub);

            found = 0;
            for(i = 0; str1[i] != '\0'; i++) {
                for(j = 0; sub[j] != '\0'; j++) {
                    if(str1[i + j] != sub[j])
                        break;
                }
                if(sub[j] == '\0') {
                    found = 1;
                    break;
                }
            }

            if(found)
                printf("Substring found");
            else
                printf("Substring not found");
            break;

        case 5: // Palindrome
            printf("Enter a string: ");
            scanf("%s", str1);

            len = 0;
            while(str1[len] != '\0') {
                len++;
            }

            flag = 1;
            for(i = 0; i < len / 2; i++) {
                if(str1[i] != str1[len - i - 1]) {
                    flag = 0;
                    break;
                }
            }

            if(flag)
                printf("Palindrome string");
            else
                printf("Not a palindrome");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}