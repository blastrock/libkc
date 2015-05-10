#ifndef XLOCALE_H
#define XLOCALE_H

#ifdef __cplusplus
extern "C" {
#endif

long
strtol_l(const char * nptr, char ** endptr, int base,
    locale_t loc);

long long
strtoll_l(const char * nptr, char ** endptr, int base,
    locale_t loc);

unsigned long
strtoul_l(const char * nptr, char ** endptr, int base,
    locale_t loc);

unsigned long long
strtoull_l(const char * nptr, char ** endptr, int base,
    locale_t loc);

double
strtod_l(const char * nptr, char ** endptr,
    locale_t loc);

float
strtof_l(const char * nptr, char ** endptr,
    locale_t loc);

long double
strtold_l(const char * nptr, char ** endptr,
    locale_t loc);

int
isalnum_l(int c, locale_t loc);

int
isalpha_l(int c, locale_t loc);

int
isblank_l(int c, locale_t loc);

int
iscntrl_l(int c, locale_t loc);

int
isdigit_l(int c, locale_t loc);

int
isgraph_l(int c, locale_t loc);

int
ishexnumber_l(int c, locale_t loc);

int
isideogram_l(int c, locale_t loc);

int
islower_l(int c, locale_t loc);

int
isnumber_l(int c, locale_t loc);

int
isphonogram_l(int c, locale_t loc);

int
isprint_l(int c, locale_t loc);

int
ispunct_l(int c, locale_t loc);

int
isrune_l(int c, locale_t loc);

int
isspace_l(int c, locale_t loc);

int
isspecial_l(int c, locale_t loc);

int
isupper_l(int c, locale_t loc);

int
isxdigit_l(int c, locale_t loc);

int
strcoll_l(const char *s1, const char *s2, locale_t loc);

int
iswalnum_l(wint_t wc, locale_t loc);

int
iswalpha_l(wint_t wc, locale_t loc);

int
iswascii_l(wint_t wc, locale_t loc);

int
iswblank_l(wint_t wc, locale_t loc);

int
iswcntrl_l(wint_t wc, locale_t loc);

int
iswdigit_l(wint_t wc, locale_t loc);

int
iswgraph_l(wint_t wc, locale_t loc);

int
iswhexnumber_l(wint_t wc, locale_t loc);

int
iswideogram_l(wint_t wc, locale_t loc);

int
iswlower_l(wint_t wc, locale_t loc);

int
iswnumber_l(wint_t wc, locale_t loc);

int
iswphonogram_l(wint_t wc, locale_t loc);

int
iswprint_l(wint_t wc, locale_t loc);

int
iswpunct_l(wint_t wc, locale_t loc);

int
iswrune_l(wint_t wc, locale_t loc);

int
iswspace_l(wint_t wc, locale_t loc);

int
iswspecial_l(wint_t wc, locale_t loc);

int
iswupper_l(wint_t wc, locale_t loc);

int
iswxdigit_l(wint_t wc, locale_t loc);

int
wcscoll_l(const wchar_t *ws1, const wchar_t *ws2, locale_t loc);

size_t
wcsxfrm_l(wchar_t *ws1, const wchar_t *ws2, size_t n,
    locale_t loc);

int
toupper_l(int c, locale_t loc);

int
tolower_l(int c, locale_t loc);

wint_t
towupper_l(wint_t wc, locale_t loc);

wint_t
towlower_l(wint_t wc, locale_t loc);

size_t
strftime_l(char *s, size_t maxsize, const char *format,
    const struct tm *timeptr, locale_t loc);

size_t
strxfrm_l(char *s1, const char *s2, size_t n, locale_t loc);

#ifdef __cplusplus
}
#endif

#endif /* XLOCALE_H */
