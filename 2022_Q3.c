#include <stdio.h>

#define MASK_TARGET 100
int mask_pair(int data[], int n);

int main (void) {
    
    int data[] = {76, 37, 63, 15, 50, 50, 50, 6, 94, 40};
    int ans = mask_pair(data, 10);
    printf("%d\n", ans);
    

    return 0;
}

int mask_pair(int data[], int n) {
  // Counter for number of masks
    int ans = 0;
  // Iterating through the entire array
    for (int i = 0; i < n; i++) {
        if (data[i] + data[i + 1] == MASK_TARGET) {
            // Increment here
            data[i] = data[i] + MASK_TARGET;
            data[i + 1] = data[i + 1] + MASK_TARGET;
            ans++;
        }
    }
    return ans;
}

