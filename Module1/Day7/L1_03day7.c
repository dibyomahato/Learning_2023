#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

typedef struct {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[10];
} LogEntry;

int readLogFile(const char* filename, LogEntry* logEntries) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 0;
    }

    char line[100];
    int count = 0;

    fgets(line, sizeof(line), file);

    while (fgets(line, sizeof(line), file) != NULL) {
        char* token;
        token = strtok(line, ",");
        logEntries[count].entryNo = atoi(token);

        token = strtok(NULL, ",");
        strcpy(logEntries[count].sensorNo, token);

        token = strtok(NULL, ",");
        logEntries[count].temperature = atof(token);

        token = strtok(NULL, ",");
        logEntries[count].humidity = atoi(token);

        token = strtok(NULL, ",");
        logEntries[count].light = atoi(token);

        token = strtok(NULL, ",");
        token[strlen(token) - 1] = '\0';
        strcpy(logEntries[count].timestamp, token);

        count++;
    }
    fclose(file);
    return count;
}

void displayLogEntries(const LogEntry* logEntries, int count) {
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTimestamp\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t\t%.1f\t\t%d\t\t%d\t%s\n", logEntries[i].entryNo, logEntries[i].sensorNo,
               logEntries[i].temperature, logEntries[i].humidity, logEntries[i].light, logEntries[i].timestamp);
    }
}

int main() {
    LogEntry logEntries[MAX_ENTRIES];
    int count = readLogFile("data.csv", logEntries);
    if (count > 0) {
        displayLogEntries(logEntries, count);
    }
    return 0;
}