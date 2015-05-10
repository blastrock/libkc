#ifndef FCNTL_H
#define FCNTL_H

#ifdef __cplusplus
extern "C" {
#endif

#define O_RDONLY 1

int open(const char *pathname, int flags, ...);

#ifdef __cplusplus
}
#endif

#endif
