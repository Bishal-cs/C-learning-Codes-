/* W.A.P to define a structure named "Employe" Having members Employe - id, name, age, company, salary, location. Taking numbers of employs details as user input and store their details to the data.txt file as per bellow format */

#include<stdio.h>
#include<stdlib.h>

struct employe{
    int ID;
    char name[20];
    int age;
    char company[50];
    int salary;
    char location[50];
};

int main(){

FILE *fp = fopen("data.txt","w");
fprintf(fp,"-----------------------Employe Data base-----------------------\n");
fprintf(fp,"_______________________________________________________________\n\n");

    int num, i;
    char o[10];
    printf("Enter the number of employes :: ");
    scanf("%d", &num);

    struct employe Workers[200];

    for(i = 0; i <num; i++){
        printf("%d employe details :: ", i+1);
        printf("\n");
        printf("ID :: ");
        scanf("%d", &Workers[i].ID);
        printf("Name :: ");
        gets(o);
        scanf("%s", Workers[i].name);
        
        printf("Age :: ");
        scanf("%d", &Workers[i].age);
        printf("Company :: ");gets(o);
        scanf("%s", Workers[i].company);
        printf("Salary :: ");
        scanf("%d", &Workers[i].salary);
        printf("Location :: ");gets(o);
        scanf("%s", Workers[i].location);
    }
    for(i = 0; i < num; i++){
        fprintf(fp,"Id :: %d \n",Workers[i].ID);
        fprintf(fp,"Name :: %s \n",Workers[i].name);
        fprintf(fp,"Age :: %d \n",Workers[i].age); 
        fprintf(fp,"Company :: %s \n",Workers[i].company);
        fprintf(fp,"Salary :: %d \n",Workers[i].salary);
        fprintf(fp,"Location :: %s \n",Workers[i].location); 

        fprintf(fp,"_______________________________________________\n");
    }
}