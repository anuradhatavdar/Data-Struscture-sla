#include <stdio.h>
int main() {
    int nums[] = {0, 1, 0, 3, 12};
    int n = 5;
    int j = 0, temp;

    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j++;
        }
    }

    printf("Output: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
