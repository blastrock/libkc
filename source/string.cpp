#include <string.h>

extern "C"
{

void* memset(void* dest, int ch, size_t count)
{
  unsigned char* ptr = static_cast<unsigned char*>(dest);
  unsigned char* end = ptr + count;
  while (ptr < end)
    *ptr++ = ch;
  return dest;
}

size_t strlen(const char* s)
{
  size_t len = 0;
  while (*s++)
    ++len;
  return len;
}

void* memcpy(void* s1, const void* s2, size_t n)
{
  char* p1 = static_cast<char*>(s1);
  const char* p2 = static_cast<const char*>(s2);

  while (n--)
    *p1++ = *p2++;

  return s1;
}

void* memmove(void* s1, const void* s2, size_t n)
{
  if (s1 == s2)
    return s1;

  char* p1 = static_cast<char*>(s1);
  const char* p2 = static_cast<const char*>(s2);
  if (p1 < p2)
    while (n--)
      *p1++ = *p2++;
  else // p1 > p2
  {
    p1 += n;
    p2 += n;

    while (n--)
      *--p1 = *--p2;
  }

  return s1;
}

int memcmp(const void* s1, const void* s2, size_t n)
{
  const char* p1 = static_cast<const char*>(s1);
  const char* p2 = static_cast<const char*>(s2);

  for (size_t i = 0; i < n; ++i, ++p1, ++p2)
  {
    if (*p1 < *p2)
      return -1;
    if (*p1 > *p2)
      return 1;
    if (*p1 == '\0') // means *p2 also == '\0'
      return 0;
  }
  return 0;
}

}
