#include<stdio.h>
#include<stdlib.h>

typedef struct Employee{
	int id;
	char name[20];
	int age;
	char company[20];
	unsigned int salary;
	char location[20];
}employee;

void main(){
	int i,n;
	char tem[2];
	FILE *fp = fopen("data.txt","w");
	printf("How many Employee : ");
	scanf("%d",&n);
	employee *e = (employee *)malloc(n*sizeof(employee));
//	employee e[10];
	fprintf(fp,"------------EMPLOYEE DETAILS-----------------\n");
	fprintf(fp,"---------------------------------------------\n");
	
	for(i=0;i<n;i++){
		
		printf("\nEnter <%d> Employee details :- \n",i+1);
		fprintf(fp,"Employee no. %d \n",i+1);
		
		printf("ID :- ");
		scanf("%d",&e[i].id);
		fprintf(fp,"\tID :- %d\n",e[i].id);
		gets(tem);
		
		printf("Name :- ");
		gets(e[i].name);
		fprintf(fp,"\tName :- %s\n",e[i].name);
		
		printf("Age :- ");
		scanf("%d",&e[i].age);
		fprintf(fp,"\tAge :- %d\n",e[i].age);
		gets(tem);
		
		printf("Company :- ");
		gets(e[i].company);
		fprintf(fp,"\tCompany :- %s\n",e[i].company);
		
		printf("Salary :- ");
		scanf("%u",&e[i].salary);
		fprintf(fp,"\tSalary :- %u/-\n",e[i].salary);
		gets(tem);
		
		printf("Location :- ");
		gets(e[i].location);
		fprintf(fp,"\tLocation :- %s\n",e[i].location);
		
		fprintf(fp,"---------------------------------------------\n");
		
	}
	printf("------------DATA SAVED SUCCESSFULLY----------------");
	fclose(fp);
}
