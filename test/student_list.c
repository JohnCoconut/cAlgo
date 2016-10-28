#include <stdio.h>

typedef struct {
	int id;
	char FirstName[10];
	char LastName[10];
	int proj1;
	int proj2;
	double grade;
} Student;

int add_student(const char *filename, Student list[], int *count)
{
	FILE *fs = fopen(filename, "r");
	while (fscanf(fs, "%d %s %s %d %d %lf",
		      &list[*count].id,
		      list[*count].FirstName,
		      list[*count].LastName, 
		      &list[*count].proj1, 
		      &list[*count].proj2,
		      &list[*count].grade
		     ) != EOF
  	      )
		(*count)++;
	return 0;
}

void print_student(Student *list, int *count)
{
	int i = 0;
	while (i < *count) {
		printf("%d %s %s %d %d %f",
			list[i].id,
		        list[i].FirstName,
		        list[i].LastName,
		        list[i].proj1,
		        list[i].proj2,
		        list[i].grade
		      );
		printf("\n");
		i++;
	}
}

int main()
{
	Student list[100];
	int count = 0;

	add_student("student_list", list, &count);
	printf("number of element is %d\n", count);
	print_student(list, &count);

}
