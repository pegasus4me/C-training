#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

#define SECOND 3600.0
#define MINUTES 60
#define HOUR 60

int timer() 
{
    int seconds; 
    printf("Enter the amount of seconds: ");
    scanf("%d", &seconds);
    
    // convert the {seconds} into a clear hour minutes seconds
    float hours = (float)seconds / SECOND;
    float minutes = ((float)hours - floor(hours)) * MINUTES;
    float s = ((float)minutes - floor(minutes)) * HOUR;

    printf("%.0d %s %.0f %s %.0f %s %.0f \n", seconds, "is equal to", floor(hours),":", floor(minutes), ":", floor(s));

    return 0;
}

int main() {
    timer();
    return 0; 
}