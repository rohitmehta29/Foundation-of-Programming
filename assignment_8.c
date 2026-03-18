#include <stdio.h>
int main(){
    int m1,m2,m3,m4,m5;
    float total,percentage;
    printf("Marks obtained in subject1 = ");
    scanf("%d",&m1);
    printf("Marks obtained in subject2 = ");
    scanf("%d",&m2);
    printf("Marks obtained in subject3 = ");
    scanf("%d",&m3);
    printf("Marks obtained in subject4 = ");
    scanf("%d",&m4);
    printf("Marks obtained in subject5 = ");
    scanf("%d",&m5);
    total=(m1+m2+m3+m4+m5);
    percentage=((total/500)*100);
    {
        if (percentage>=75)
        printf("Grade obtained is Distinction");
        else if (percentage>=60 && percentage<75)
        printf("Grade obtained is First Division");
        else if (percentage>=50 && percentage<60)
        printf("Grade obtained is First Division");
        else if (percentage>=40 && percentage<50)
        printf("Grade obtained is First Division");
        else
        printf("Fail");
    }
     return 0;

}