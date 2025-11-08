#include <stdio.h>
#include <string.h>

int main() {
    char name[30];
    int roll_no;
    float T, A, P;

    scanf(" %s %d %f %f",name,&roll_no, &T, &A);

    
    if (T < 0) {
        printf("Invalid total number of class");
        return 0;
    }

    if (A < 0) {
        printf("Invalid number of class attended");
        return 0;
    }
    if (A > T) {
        printf("Number of attended class cannot be greater than total number of class");
        return 0;
    }

    if (T == 0) {
        P = 0;
    } else {
        P =(A/T)*100;
    }
        printf("Attendance Percentage: %.2f%%", P);

    return 0;
}
