#include <stdio.h>

struct Time {
    int hour;
    int min;
    int sec;
};

int main() {
    struct Time start, end, diff;
    printf("Enter start time (hh mm ss): ");
    scanf("%d %d %d", &start.hour, &start.min, &start.sec);
    printf("Enter end time (hh mm ss): ");
    scanf("%d %d %d", &end.hour, &end.min, &end.sec);

    if(end.sec < start.sec) {
        end.sec += 60;
        end.min--;
    }
    diff.sec = end.sec - start.sec;

    if(end.min < start.min) {
        end.min += 60;
        end.hour--;
    }
    diff.min = end.min - start.min;

    diff.hour = end.hour - start.hour;

    printf("Time Difference = %d:%d:%d\n", diff.hour, diff.min, diff.sec);
    return 0;
}
