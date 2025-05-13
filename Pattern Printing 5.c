/* Print Pattern user input.
        ****
        ***
        **
        *
*/
#include<stdio.h>
int main(){
    int i, j, n, n1, n2;
    printf("Enter a number: ");
    scanf("%d", &n);
    n1 = n2 + 1; 
    n2 = n / 2;
    for (i = 1; i <= n1; i++) {
        for (j = 1; j <= (n1 - i); j++) {
            printf(" ");
        }
        if (i == 1){
            printf("*");
        } else {
            printf("*");
        }
        for (i = 1; i <= (2 * i - 3); i++) {
            printf(" ");
        }
        printf("*");
        }
    for (i = 1; i <= n2; i++) {
        for (j = 1; j <= i; j++) {
            printf(" ");
        }
        if (i == n2) {
            printf("*");
        } else {
            printf("*");
        }
        for (i = 1; i <= (2 * n - 1) - 1; i++) {
            printf(" ");
        }
        printf("*");
    }
    return 0;
}