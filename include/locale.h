#ifndef LOCALE_H
#define LOCALE_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define LC_COLLATE_MASK 0x1
#define LC_CTYPE_MASK 0x2
#define LC_MONETARY_MASK 0x4
#define LC_NUMERIC_MASK 0x8
#define LC_TIME_MASK 0x10
#define LC_MESSAGES_MASK 0x10
#define LC_ALL_MASK 0x1F

#define LC_ALL LC_ALL_MASK

extern uint8_t MB_CUR_MAX;

struct lconv
{
  /* Numeric (nonmonetary) information */

  char *decimal_point;     /* Radix character */
  char *thousands_sep;     /* Separator for digit groups to left
                              of radix character */
  char *grouping; /* Each element is the number of digits in a
                     group; elements with higher indices are
                     further left.  An element with value CHAR_MAX
                     means that no further grouping is done.  An
                     element with value 0 means that the previous
                     element is used for all groups further left. */

  /* Remaining fields are for monetary information */

  char *int_curr_symbol;   /* First three chars are a currency symbol
                              from ISO 4217.  Fourth char is the
                              separator.  Fifth char is '\0'. */
  char *currency_symbol;   /* Local currency symbol */
  char *mon_decimal_point; /* Radix character */
  char *mon_thousands_sep; /* Like thousands_sep above */
  char *mon_grouping;      /* Like grouping above */
  char *positive_sign;     /* Sign for positive values */
  char *negative_sign;     /* Sign for negative values */
  char  int_frac_digits;   /* International fractional digits */
  char  frac_digits;       /* Local fractional digits */
  char  p_cs_precedes;     /* 1 if currency_symbol precedes a
                              positive value, 0 if succeeds */
  char  p_sep_by_space;    /* 1 if a space separates currency_symbol
                              from a positive value */
  char  n_cs_precedes;     /* 1 if currency_symbol precedes a
                              negative value, 0 if succeeds */

  char  n_sep_by_space;    /* 1 if a space separates currency_symbol
                              from a negative value */
  /* Positive and negative sign positions:
     0 Parentheses surround the quantity and currency_symbol.
     1 The sign string precedes the quantity and currency_symbol.
     2 The sign string succeeds the quantity and currency_symbol.
     3 The sign string immediately precedes the currency_symbol.
     4 The sign string immediately succeeds the currency_symbol. */
  char  p_sign_posn;
  char  n_sign_posn;
  /* 1 if int_curr_symbol precedes a positive value, 0 if succeeds.  */
  char int_p_cs_precedes;
  /* 1 iff a space separates int_curr_symbol from a positive value.  */
  char int_p_sep_by_space;
  /* 1 if int_curr_symbol precedes a negative value, 0 if succeeds.  */
  char int_n_cs_precedes;
  /* 1 iff a space separates int_curr_symbol from a negative value.  */
  char int_n_sep_by_space;
  /* Positive and negative sign positions:
     0 Parentheses surround the quantity and int_curr_symbol.
     1 The sign string precedes the quantity and int_curr_symbol.
     2 The sign string follows the quantity and int_curr_symbol.
     3 The sign string immediately precedes the int_curr_symbol.
     4 The sign string immediately follows the int_curr_symbol.  */
  char int_p_sign_posn;
  char int_n_sign_posn;
};

struct __locale_struct
{
  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;
};

typedef struct __locale_struct* locale_t;

char* setlocale(int category, const char* locale);
lconv* localeconv();

locale_t newlocale(int category_mask, const char *locale,
    locale_t base);
void freelocale(locale_t locobj);
locale_t uselocale(locale_t newloc);


#ifdef __cplusplus
}
#endif

#endif
