#include <stdio.h>
#include <stdlib.h>

int capturex(int *x);
int calcsum(int *x);
int displayx(int *x);

int main() {
    int x[10], sum, choice;

    choice = 1;

    while (choice != 4) {
        printf("---MENU---\n");
        printf("1: INPUT list values\n");
        printf("2: Calculate sum\n");
        printf("3: Display list\n");
        printf("4: Exit\n");
        printf("--------------------------------------\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                capturex(x);
                break;
            case 2:
                sum = calcsum(x);
                printf("Sum = %d\n", sum);
                break;
            case 3:
                displayx(x);
                break;
            case 4:
                printf("Thank You...\n");
                printf("Program is exiting\n");
                break;
            default:
                printf("Choose a valid option\n");
                break;
        }
    }

    return 0;
}

int capturex(int *x) {
    int i;
    for (i = 0; i < 10; i++) {
        printf("Enter value %d: ", i);
        scanf("%d", &x[i]);
    }
}

int calcsum(int *x) {
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += x[i];
    }
    return sum;
}

int displayx(int *x) {
    for (int i = 0; i < 10; i++) {
        printf("%d\t%d\n", i, x[i]);
    }
}

