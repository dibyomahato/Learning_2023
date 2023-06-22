#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time getTimePeriod() {
    struct Time time;
    
    printf("Enter time period (hours minutes seconds): ");
    scanf("%d %d %d", &time.hours, &time.minutes, &time.seconds);
    
    return time;
}

struct Time calculateDifference(struct Time start, struct Time end) {
    struct Time diff;
    
    int startSeconds = start.hours * 3600 + start.minutes * 60 + start.seconds;
    int endSeconds = end.hours * 3600 + end.minutes * 60 + end.seconds;
    int diffSeconds = endSeconds - startSeconds;

    diff.hours = diffSeconds / 3600;
    diffSeconds %= 3600;
    diff.minutes = diffSeconds / 60;
    diff.seconds = diffSeconds % 60;
    
    return diff;
}

int main() {
    struct Time startTime, endTime, difference;
    
    printf("Enter the start time:\n");
    startTime = getTimePeriod();
    
    printf("Enter the end time:\n");
    endTime = getTimePeriod();
    difference = calculateDifference(startTime, endTime);
    
    printf("\nTime difference: %d hours %d minutes %d seconds\n", difference.hours, difference.minutes, difference.seconds);
    return 0;
}