#include <stdio.h>
#include <stdlib.h>

typedef struct  {
    int day;
    int month;
    int year;
} Date;

typedef struct
{
    char Event_name[40];
    Date Event_date;
    char Description[256];
} Event;

int main(){
    int n;
    printf("Please enter the number of events: ");
    scanf("%d", &n);
    Event* events = (Event*) malloc(n * sizeof(Event));

    for (int i = 0; i < n; i++){
        printf("Enter the %d event data: ", i);
        scanf("%s %d %d %d %s", &events[i].Event_name, &events[i].Event_date.day,
         &events[i].Event_date.month, &events[i].Event_date.year, &events[i].Description);
    
    }

    system("clear");
    for (int i = 0; i < n; i++){
        printf("Event: %s\n", events[i].Event_name);
        printf("Date: %d/%d/%d\n", events[i].Event_date.day,
         events[i].Event_date.month, events[i].Event_date.year);
        printf("Description: %s\n\n", events[i].Description);
    }
    free(events);
}