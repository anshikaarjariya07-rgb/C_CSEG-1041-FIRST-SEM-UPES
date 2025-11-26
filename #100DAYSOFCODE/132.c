//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>
#include <string.h>

int main() {
    // Defining enum for traffic lights
    enum TrafficLight { RED, YELLOW, GREEN };

    char input[10];
    printf("Enter traffic light (RED / YELLOW / GREEN): ");
    scanf("%s", input);

    // Convert input to enum value
    enum TrafficLight signal;

    if (strcmp(input, "RED") == 0)
        signal = RED;
    else if (strcmp(input, "YELLOW") == 0)
        signal = YELLOW;
    else if (strcmp(input, "GREEN") == 0)
        signal = GREEN;
    else {
        printf("Invalid input");
        return 0;
    }

    // Print based on enum value
    switch (signal) {
        case RED:
            printf("Stop");
            break;
        case YELLOW:
            printf("Wait");
            break;
        case GREEN:
            printf("Go");
            break;
    }

    return 0;
}
