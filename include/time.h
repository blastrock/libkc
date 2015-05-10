#ifndef TIME_H
#define TIME_H

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef uint64_t clock_t;
typedef uint64_t time_t;

struct tm {
  int tm_sec;    /* Seconds (0-60) */
  int tm_min;    /* Minutes (0-59) */
  int tm_hour;   /* Hours (0-23) */
  int tm_mday;   /* Day of the month (1-31) */
  int tm_mon;    /* Month (0-11) */
  int tm_year;   /* Year - 1900 */
  int tm_wday;   /* Day of the week (0-6, Sunday = 0) */
  int tm_yday;   /* Day in the year (0-365, 1 Jan = 0) */
  int tm_isdst;  /* Daylight saving time */
};

clock_t clock();
double difftime(time_t time1, time_t time0);
time_t mktime(tm* timeptr);
time_t time(time_t* timer);
char* asctime(const tm* timeptr);
char* ctime(const time_t* timer);
tm*    gmtime(const time_t* timer);
tm* localtime(const time_t* timer);
size_t strftime(char* s, size_t maxsize, const char* format,
                const tm* timeptr);

#ifdef __cplusplus
}
#endif

#endif
