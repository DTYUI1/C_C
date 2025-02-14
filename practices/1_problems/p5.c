#include <stdio.h>
#include <math.h>

int main() {
    double e_dist; // estimated dist
    double a_dist; // actual dist
    
    printf("Please input estimated dist: ");
    scanf("%lf", &e_dist);
    printf("Please input actual dist: ");
    scanf("%lf", &a_dist);

    printf("\'%f, %f\'\n", e_dist, a_dist);

    if (fabs(e_dist - a_dist) > 0.1) {
        printf("Oh no... The orbit is so crazy!!!");
    } else {
        printf("The orbit is fine :)");
    }
    return 0;
    
}