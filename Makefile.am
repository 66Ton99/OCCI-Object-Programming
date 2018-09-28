CPPFLAGS += $(AWN_CPPFLAGS) -Wall

AM_CPPFLAGS = -I/usr/include/oracle/12.2/client64
LDLIBSOPTIONS = -L/usr/lib/oracle/12.2/client64/lib -lpthread -lcrypto -lclntshcore -lipc1 -lmql1 -lons -lociei \
			    -lclntsh -lnnz12 -locci

AM_LDFLAGS = $(LDLIBSOPTIONS)

bin_PROGRAMS = db
db_SOURCES =		\
	main.cpp		\
        demo2.cpp	\
        demo2.h		\
        mappings.cpp\
        mappings.h	\
        myDemo.cpp

MAINTAINERCLEANFILES =		\
	Makefile.in				\
	Makefile				\
	aclocal.m4				\
	config.status			\
	configure
.c.s:
	$(COMPILE) -fverbose-asm -S -o $@ $<

.c.i:
	$(COMPILE) -E -o $@ $<
