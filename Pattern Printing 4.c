/* Print Pattern user input.
    *******
     *   *
      * *
       *
*/
#include<stdio.h>
int main() {
    int i, j, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= (i - 1); j ++){
            printf(" ");
        }
    if (i == 1 || i == n) {
        for (j = 1; j <= 2*(n - i) + 1; j ++){
            printf("*");
    }
    } else {
        printf("*");
        for (j = 1; j <= 2*(n - i) - 1; j ++){
            printf(" ");
        }
        printf("*");
    }
    printf("\n");
    }
    return 0;
}   
