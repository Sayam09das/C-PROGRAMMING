/* Mr. X walks 20ft and 8inch in a narrow road and covers it in 10 mins. From Mr.X ending point 
Mr. Y starts walking and cover a distance 32ft and 6inch in 15 mins. Write a C program that 
will calculate total distance covered and time taken by Mr.X and Mr.Y together using 
structure. */
#include<stdio.h>

struct distance {
    int feet;
    int inches;
};

struct time {
    int minutes;
};

int total_distance_and_time(struct distance X, struct time xTime, struct distance Y,struct time yTime) {
    int totalInchesX = X.feet * 12 + X.inches;
    int totalInchesY = Y.feet * 12 + Y.inches;
    int totalDistanceInches = totalInchesX + totalInchesY;
    int totalTimeMinutes = xTime.minutes + yTime.minutes;
    return totalDistanceInches + totalTimeMinutes;
}

int main() {
    struct distance X = {20, 8};
    struct time X_time = {10};
    struct distance Y = {32, 6};
    struct time Y_time = {15};

    int result = total_distance_and_time(X, X_time, Y, Y_time);
    printf("Total distance and time: %d\n", result);

    return 0;
}
