#include <stdio.h>

int isprime(int x);
int previous_k_PFS_number(int n, int k);

int main (void) {
    
    int ans = previous_k_PFS_number(18, 8);
    printf("%d\n", ans);

    return 0;
}

int isprime(int x) {
    if (x == 1) {
        return 0;
    } else {
        for (int i = 2; i < x; i++) {
            if (x % i == 0) {
                return 0;
            }
        }
    }
    return 1;
}

int previous_k_PFS_number(int n, int k) {
    // The idea is to start from the back and return once we find the first number that matches
    // Eg : if n = 18, we iterate 18, 17, 16, 15....

    for (int i = n - 1; i > 1; i--) {
        int factorSum = 0;
        // Checking for factors
        for (int factors = 1; factors <= i; factors++) {
            if (i % factors == 0 && isprime(factors)) {
                factorSum += factors;
            }
        }

        // Making a decision to return
        if (factorSum < k) {
            return i;
        }
    }
    return -1;
}
