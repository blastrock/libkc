#ifndef ASSERT_H
#define ASSERT_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef NDEBUG
#define assert(expr) \
  do { \
    if (!(expr)) \
      assert_fail(__FILE__, __LINE__, #expr); \
  } while (0)
#else
#define assert(expr)
#endif

void assert_fail(const char* file, int line, const char* condition);

#ifdef __cplusplus
}
#endif


#endif
