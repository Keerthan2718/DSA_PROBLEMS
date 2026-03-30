#include <stdio.h>
int main() {
    int i, j;
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        if (i == n/2) {
            // Middle row
            for (j = 0; j < n; j++) {
                printf("*");
            }
        } else {
            // spaces then one star
            for (j = 0; j < n/2; j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
