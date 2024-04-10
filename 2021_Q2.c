#include <stdio.h>

int is_factor (int n);
int secret(int i, int K);
int secret_math (int i, int j, int K1, int K2);

int main (void) {

    int ans;
    ans = secret_math(5, 2, 3, 7);
    printf("%d", ans);

    return 0;
}


int is_prime (int n) {
    // Returns 1 for primes
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int secret(int i, int K) {
    int current = 1;
    int current_count = 0;
    int exit = 0;
    // i = the # of secrets , k = the prime number
    while (exit == 0) {
        int failed = 0;
        for (int x = 1; x <= current; x++) {
            if (current % x == 0 && is_prime(x)) {
                // Factor of the current number & this factor is also a prime
                if (x > K) {
                    // This is smaller or equal to the prime number we are testing for
                    failed = 1;
                }
            }
        }
        // Only makes a decision after ALL primes are checked
        if (failed == 0) {
            current_count++;
        }
        // Checking to exit after every number
        if (current_count == i) {
            return current;
        } 
        current++;
    } 
    return current;
}

int secret_math (int i, int j, int K1, int K2) {
    
    int first_secret_num = secret(i, K1);
    int second_secret_num = secret(j, K2);
    int ans = first_secret_num + second_secret_num;

    return ans;

}
