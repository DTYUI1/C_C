#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char Name[30];
    int Creadits;
    char Professor[30];
} Course;

int main(){
    int n;
    printf("Please enter the number of courses: ");
    scanf("%d", &n);
    Course* courses = (Course*) malloc(n * sizeof(Course));

    for (int i = 0; i < n; i++){
        // printf("Enter the %d item data: ", i);
        scanf("%s %d %s", &courses[i].Name, &courses[i].Creadits, &courses[i].Professor);
        getchar();
    }

    system("clear");
    for (int i = 0; i < n; i++){
        printf("Course: %s\n", courses[i].Name);
        printf("Credits: %d\n", courses[i].Creadits);
        printf("Professor: %s\n\n", courses[i].Professor);
    }
    free(courses);
}
