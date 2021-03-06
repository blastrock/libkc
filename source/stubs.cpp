#include <assert.h>

#define DECLARE_STUB(fn) \
  void fn() \
  { \
    assert(! #fn " is not implemented"); \
  }

extern "C"
{

DECLARE_STUB(MB_CUR_MAX)
DECLARE_STUB(_Unwind_DeleteException)
DECLARE_STUB(_Unwind_GetIP)
DECLARE_STUB(_Unwind_GetLanguageSpecificData)
DECLARE_STUB(_Unwind_GetRegionStart)
DECLARE_STUB(_Unwind_RaiseException)
DECLARE_STUB(_Unwind_Resume)
DECLARE_STUB(_Unwind_SetGR)
DECLARE_STUB(_Unwind_SetIP)
DECLARE_STUB(__dso_handle)
DECLARE_STUB(abort)
DECLARE_STUB(btowc)
DECLARE_STUB(catclose)
DECLARE_STUB(catgets)
DECLARE_STUB(catopen)
DECLARE_STUB(errno)
DECLARE_STUB(fprintf)
DECLARE_STUB(freelocale)
DECLARE_STUB(isascii)
DECLARE_STUB(isdigit)
DECLARE_STUB(isdigit_l)
DECLARE_STUB(islower_l)
DECLARE_STUB(isupper)
DECLARE_STUB(isupper_l)
DECLARE_STUB(iswalpha_l)
DECLARE_STUB(iswblank_l)
DECLARE_STUB(iswcntrl_l)
DECLARE_STUB(iswdigit_l)
DECLARE_STUB(iswlower_l)
DECLARE_STUB(iswprint_l)
DECLARE_STUB(iswpunct_l)
DECLARE_STUB(iswspace_l)
DECLARE_STUB(iswupper_l)
DECLARE_STUB(iswxdigit_l)
DECLARE_STUB(isxdigit)
DECLARE_STUB(isxdigit_l)
DECLARE_STUB(localeconv)
DECLARE_STUB(mbrlen)
DECLARE_STUB(mbrtowc)
DECLARE_STUB(mbsnrtowcs)
DECLARE_STUB(mbsrtowcs)
DECLARE_STUB(mbtowc)
DECLARE_STUB(memchr)
DECLARE_STUB(printf)
DECLARE_STUB(realloc)
DECLARE_STUB(setlocale)
DECLARE_STUB(snprintf)
DECLARE_STUB(sscanf)
DECLARE_STUB(stderr)
DECLARE_STUB(strcmp)
DECLARE_STUB(strcoll_l)
DECLARE_STUB(strerror)
DECLARE_STUB(strftime_l)
DECLARE_STUB(strtod)
DECLARE_STUB(strtof)
DECLARE_STUB(strtol)
DECLARE_STUB(strtold)
DECLARE_STUB(strtold_l)
DECLARE_STUB(strtoll)
DECLARE_STUB(strtoll_l)
DECLARE_STUB(strtoul)
DECLARE_STUB(strtoull)
DECLARE_STUB(strtoull_l)
DECLARE_STUB(strxfrm_l)
DECLARE_STUB(swprintf)
DECLARE_STUB(tolower_l)
DECLARE_STUB(toupper_l)
DECLARE_STUB(towlower_l)
DECLARE_STUB(towupper_l)
DECLARE_STUB(uselocale)
DECLARE_STUB(vasprintf)
DECLARE_STUB(vfprintf)
DECLARE_STUB(vsnprintf)
DECLARE_STUB(vsscanf)
DECLARE_STUB(wcrtomb)
DECLARE_STUB(wcscoll_l)
DECLARE_STUB(wcslen)
DECLARE_STUB(wcsnrtombs)
DECLARE_STUB(wcstod)
DECLARE_STUB(wcstof)
DECLARE_STUB(wcstol)
DECLARE_STUB(wcstold)
DECLARE_STUB(wcstoll)
DECLARE_STUB(wcstoul)
DECLARE_STUB(wcstoull)
DECLARE_STUB(wcsxfrm_l)
DECLARE_STUB(wctob)
DECLARE_STUB(wmemchr)
DECLARE_STUB(wmemcmp)
DECLARE_STUB(wmemcpy)
DECLARE_STUB(wmemmove)
DECLARE_STUB(wmemset)

// There is no exit in a kernel
void __cxa_atexit()
{
}

}
