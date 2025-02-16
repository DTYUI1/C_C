#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char Name[30];
    int Age;
    double GPA;
} Student;


int main(int argc, char *argv[]) {
    int how_many;
    printf("Enter how many students you want to input: ");
    scanf("%d", &how_many);
    Student* students = (Student*) malloc(how_many * sizeof(Student)); // В p1.c также решал с указателем на структуры

    for (int i = 0; i < how_many; i++) {
        printf("Student %d data:\n", i);
        scanf("%s%d%lf", students[i].Name, &students[i].Age, &students[i].GPA);
        printf("\n");
    }
    system("clear");

    for (int i = 0; i < how_many; i++) {
        printf("Name: %s\n", students[i].Name);
        printf("Age: %d\n", students[i].Age);
        printf("GPA: %.1lf\n", students[i].GPA);
    }
    

}
