#ifndef CTYPE_H
#define CTYPE_H

#ifdef __cplusplus
extern "C" {
#endif

enum
{
  _ISupper = 1 << 0,
  _ISlower = 1 << 1,
  _ISalpha = 1 << 2,
  _ISdigit = 1 << 3,
  _ISxdigit = 1 << 4,
  _ISspace = 1 << 5,
  _ISprint = 1 << 6,
  _ISgraph = 1 << 7,
  _ISblank = 1 << 8,
  _IScntrl = 1 << 9,
  _ISpunct = 1 << 10,
  _ISalnum = 1 << 11
};

int isalnum(int c);
int isalpha(int c);
int isblank(int c);  // C99
int iscntrl(int c);
int isdigit(int c);
int isgraph(int c);
int islower(int c);
int isprint(int c);
int ispunct(int c);
int isspace(int c);
int isupper(int c);
int isxdigit(int c);
int tolower(int c);
int toupper(int c);

int isascii(int c);

#ifdef __cplusplus
}
#endif

#endif
