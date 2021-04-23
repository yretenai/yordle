
#ifndef YORDLE_EXPORT_H
#define YORDLE_EXPORT_H

#ifdef YORDLE_STATIC_DEFINE
#  define YORDLE_EXPORT
#  define YORDLE_NO_EXPORT
#else
#  ifndef YORDLE_EXPORT
#    ifdef yordle_EXPORTS
        /* We are building this library */
#      define YORDLE_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define YORDLE_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef YORDLE_NO_EXPORT
#    define YORDLE_NO_EXPORT 
#  endif
#endif

#ifndef YORDLE_DEPRECATED
#  define YORDLE_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef YORDLE_DEPRECATED_EXPORT
#  define YORDLE_DEPRECATED_EXPORT YORDLE_EXPORT YORDLE_DEPRECATED
#endif

#ifndef YORDLE_DEPRECATED_NO_EXPORT
#  define YORDLE_DEPRECATED_NO_EXPORT YORDLE_NO_EXPORT YORDLE_DEPRECATED
#endif

#if 1 /* DEFINE_NO_DEPRECATED */
#  ifndef YORDLE_NO_DEPRECATED
#    define YORDLE_NO_DEPRECATED
#  endif
#endif

#endif /* YORDLE_EXPORT_H */
