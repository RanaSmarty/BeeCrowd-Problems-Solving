/*
Two cars (X and Y) leave in the same direction. 
The car X leaves with a constant speed of 60 km/h and the car Y leaves with a constant speed of 90 km / h.

In one hour (60 minutes) the car Y can get a distance of 30 kilometers from the X car, 
in other words, it can get away one kilometer for each 2 minutes.

Read the distance (in km) and calculate how long it takes (in minutes) for the car Y to take this distance in relation to the other car.

Input
The input file contains 1 integer value.

110

Output
Print the necessary time followed by the message "minutos" that means minutes in Portuguese.

220 minutos
*/

#include <stdio.h>

int main() {
    
    printf("Welcome to the Car Distance Time Calculator.\n");

    int distance;
    int time;

    printf("\nEnter the distance in km: ");
    scanf("%d", &distance);

    /*
    Logic:
        Difference between car_X and car_Y = (90 - 60) km/h
                                        = 30 km/h.

            car_Y can get away 30 km in 1 hour or 60 minutes.
            So, for 1 km = (60 / 30) minutes
                        = 2 minutes.
    */

    time = 2 * distance;

    printf("\n%d", time);
    printf(" minutos\n");
    return 0;
}