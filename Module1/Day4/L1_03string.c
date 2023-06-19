#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int computeTotalSeconds(char time[]) {
    int hours, minutes, seconds;
    char *token;
    token = strtok(time, ":");
    hours = atoi(token);

    token = strtok(NULL, ":");
    minutes = atoi(token);

    token = strtok(NULL, ":");
    seconds = atoi(token);
    int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;
    return totalSeconds;
}

int main() {
    char time[9];

    printf("Enter time in the format hh:mm:ss: ");
    fgets(time, sizeof(time), stdin);
    time[strcspn(time, "\n")] = '\0';

    int totalSeconds = computeTotalSeconds(time);

    printf("Total seconds: %d\n", totalSeconds);

    return 0;
}