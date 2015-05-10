#ifndef SYS_TIME_H
#define SYS_TIME_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define CLOCK_MONOTONIC 0

typedef uint8_t clockid_t;

struct timeval {
  uint32_t tv_sec;
  uint32_t tv_usec;
};

struct timespec {
  uint32_t tv_sec;
  uint32_t tv_nsec;
};

int gettimeofday(struct timeval *tv, struct timezone *tz);
int settimeofday(const struct timeval *tv, const struct timezone *tz);

int clock_gettime(clockid_t clk_id, struct timespec *tp);

#ifdef __cplusplus
}
#endif

#endif
