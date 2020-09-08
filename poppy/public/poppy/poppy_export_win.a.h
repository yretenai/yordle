
#ifndef POPPY_EXPORT_H
#define POPPY_EXPORT_H

#ifdef POPPY_STATIC_DEFINE
#  define POPPY_EXPORT
#  define POPPY_NO_EXPORT
#else
#  ifndef POPPY_EXPORT
#    ifdef poppy_EXPORTS
        /* We are building this library */
#      define POPPY_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define POPPY_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef POPPY_NO_EXPORT
#    define POPPY_NO_EXPORT 
#  endif
#endif

#ifndef POPPY_DEPRECATED
#  define POPPY_DEPRECATED __declspec(deprecated)
#endif

#ifndef POPPY_DEPRECATED_EXPORT
#  define POPPY_DEPRECATED_EXPORT POPPY_EXPORT POPPY_DEPRECATED
#endif

#ifndef POPPY_DEPRECATED_NO_EXPORT
#  define POPPY_DEPRECATED_NO_EXPORT POPPY_NO_EXPORT POPPY_DEPRECATED
#endif

#if 1 /* DEFINE_NO_DEPRECATED */
#  ifndef POPPY_NO_DEPRECATED
#    define POPPY_NO_DEPRECATED
#  endif
#endif

#endif /* POPPY_EXPORT_H */
