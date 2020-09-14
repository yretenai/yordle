
#ifndef POPPY_EXPORT_H
#define POPPY_EXPORT_H

#ifdef POPPY_STATIC_DEFINE
#  define POPPY_EXPORT
#  define POPPY_NO_EXPORT
#else
#  ifndef POPPY_EXPORT
#    ifdef poppy_EXPORTS
        /* We are building this library */
#      define POPPY_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define POPPY_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef POPPY_NO_EXPORT
#    define POPPY_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef POPPY_DEPRECATED
#  define POPPY_DEPRECATED __attribute__ ((__deprecated__))
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
