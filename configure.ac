AC_PREREQ([2.69])
AC_INIT([libtimc], [0.0.1], [tim@metaverse.systems])
LT_INIT
AC_CONFIG_HEADERS([config.h])

AC_CONFIG_MACRO_DIR([m4])

AC_PROG_CC
AM_INIT_AUTOMAKE([subdir-objects])

CFLAGS="$CFLAGS -fno-stack-protector -fpic -fshort-wchar -mno-red-zone -I ../include"

AC_CONFIG_FILES([Doxyfile])
AC_OUTPUT(Makefile string/Makefile)
