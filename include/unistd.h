#ifndef UNISTD_H
#define UNISTD_H

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef signed long ssize_t;

ssize_t read(int fd, void *buf, size_t count);
int close(int fd);

#ifdef __cplusplus
}
#endif

#endif
