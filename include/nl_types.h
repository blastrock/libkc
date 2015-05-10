#ifndef NL_TYPES_H
#define NL_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

#define NL_CAT_LOCALE 0

typedef int nl_catd;

nl_catd catopen(const char *name, int flag);
int catclose(nl_catd catalog);
char *catgets(nl_catd catalog, int set_number, int message_number,
    const char *message);

#ifdef __cplusplus
}
#endif

#endif
