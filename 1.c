#include <stdio.h>
#include <stdlib.h>

struct ogrenci{
	int number;
	char name[40];
	char surname[40];
	float midterm;
};

int main(){
	struct ogrenci student[10];
	int i=0;
	for(i;i<3;i++){
		printf("Enter the name of student %d\n",i+1);
		scanf("%s",&student[i].name);
		printf("Enter the surname of student %d\n",i+1);
		scanf("%s",&student[i].surname);
		printf("Enter the number of student %d\n",i+1);
		scanf("%d",&student[i].number);
		printf("Enter the midterm grade of student %d\n",i+1);
		scanf("%f",&student[i].midterm);
	}
	for(i=0;i<3;i++) printf("\nName:%s\nSurname:%s\nNumber:%d\nMidterm Grade:%.2f",
								student[i].name, student[i].surname, student[i].number, student[i].midterm);
								
	return 0;
}
