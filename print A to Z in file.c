// W.A.P to create a new file named "new.txt" and write A to Z in it.

#include <stdio.h>
int main(){
    FILE *fp = fopen("new.txt", "w");
    char c = 'A';
    while(c <= 'Z'){
        fputc(c, fp);
        c++;
    }
    fclose(fp);
    return 0;
}