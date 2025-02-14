#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char Name[30];
    int Age;
    double GPA;
} Student;


int main(int argc, char *argv[]) {
    int how_much = 0;
    printf("Enter how many students you want to input: ");
    scanf("%d", &how_much);
    Student* students = (Student*) malloc(how_much * sizeof(Student)); 

    for (int i = 1; i < how_much + 1; i++) {
        printf("Student %d data:\n", i);
        // Alice 20 4.5
        scanf("%s%d%lf", students[i].Name, &students[i].Age, &students[i].GPA);
        printf("\n");
    }

    for (int i = 1; i < how_much + 1; i++) {
        printf("Name: %s\n", students[i].Name);
        printf("Age: %d\n", students[i].Age);
        printf("GPA: %lf\n", students[i].GPA);
    }
    

}