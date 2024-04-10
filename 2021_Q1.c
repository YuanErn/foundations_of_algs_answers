#include <stdio.h>

int main(int argc, char *argv[]){
    int k;
    printf("How many layers tall will the Christmas tree be?\n");
    scanf("%d", &k);
    printf("T\n");

    for (int i = 1; i <= 2*(k); i++) { // 0 -> 2k

        for (int stars = 1; stars <= i*2; stars++) { // 2 -> 2*2k
            printf("*");
        }

        printf("\n");
    }
    printf("\n");

    return 0;
}
