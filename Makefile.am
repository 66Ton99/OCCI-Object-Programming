CPPFLAGS += $(AWN_CPPFLAGS) -Wall

AM_CPPFLAGS = $(ORACLE_OCCI_CPPFLAGS)

LDLIBSOPTIONS = -lpthread -lcrypto -lclntshcore -lipc1 -lmql1 -lons
AM_LDFLAGS = $(ORACLE_OCCI_LDFLAGS)

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
