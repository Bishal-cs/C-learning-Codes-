/* W.A.P to create a new file named "new.txt" and read this file and print it. */

#include<stdio.h>
int main(){
    char c;
    FILE *fp = fopen("new.txt", "r");
    while(1){
        c = fgetc(fp);
        if(c == EOF){
            break;
        }
        printf("%c", c);
    }
    fclose(fp);
    return 0;
}