#include <stdio.h>
#include <unistd.h>

int main() {
    float oxygen_level;
    printf("Please enter your oxygen levels: ");
    scanf("%f", &oxygen_level);
    
    if (oxygen_level < 15.0) {
        printf("Activation the Emergency System!\n");
        printf("The Emergency System is active! Have a nice day!\n");
        for (int i = 0; i < 15; i++){
            printf("Danger! Oxygen levels are not stable!\n");
            sleep(1);
        }
        printf("Activation the hibernation mode..");
    }
    else {
        printf("Your oxygen levels are fine! Have a nice day!");
    }

}