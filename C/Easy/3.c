#include <stdio.h>

int main() {
    int num;
    printf("Enter any number from 1 to 3");
    scanf("%d", &num);
    switch (num) {
        case 1:
            printf("\nOne");
        case 2:
            printf("\nTwo");
        case 3:
            printf("\nThree");
    }
    return 0;
}