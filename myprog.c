#include<stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    for (int i = 0; i <= 3; i++) {   // BUG: should be i < 3
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}

