#include <stdio.h>

int main (void) {

    int userIn;

    printf("Enter the number of tree rows: ");
    scanf("%d", &userIn);

    if (userIn % 2 == 0) {
        for (int i = 1; i <= userIn; i++) {
            if (i % 2 == 0) {
                // Printing Trunks  
                printf("I");
                if (i > 2) {
                    for (int light = 1; light <= i - 2; light++) {
                        if (light == i - 2) {
                            printf("+");
                        } else {
                            printf(" ");
                        }
                    }
                }
                printf("\n");



            } else{
                // Printing Leaves
                for (int leaves = 1; leaves <= i; leaves++) {
                    printf("*");
                }
                printf("\n");
            }
        }
    } else {
        printf("Input invalid.");
    }
    

    return 0;
}

