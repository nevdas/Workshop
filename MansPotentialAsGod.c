#include <stdio.h>
#include <time.h>
#include <math.h>

int main(void) {
    struct tm reference = {0};
    reference.tm_year = 2025 - 1900; // tm_year counts from 1900
    reference.tm_mon  = 8;           // September (0 = Jan)
    reference.tm_mday = 7;           // 7th day

    time_t ref_time = mktime(&reference);
    time_t now = time(NULL);

    double diff_seconds = difftime(now, ref_time);
    int days = (int)floor(diff_seconds / (60 * 60 * 24));

    if (diff_seconds > 0) {
        printf("It has been %d days since 9/7/2025.\n", days);
    } else if (diff_seconds < 0) {
        printf("%d days remain until 9/7/2025.\n", (int)ceil(-diff_seconds / (60 * 60 * 24)));
    } else {
        printf("Today is 9/7/2025!\n");
    }

    printf("Hello, World!");
    return 0;
}