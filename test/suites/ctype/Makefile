include ../make.config



#SOURCES += $(wildcard test_*.c) main.c

SOURCE1 = $(SOURCES) test_isalpha.c test_isupper.c  main.c
CFLAGS += -DMAX_TESTS=300 -DNO_LOG_RUNNING -DNO_LOG_PASSED


all: test1.bin test2.bin test3.bin test4.bin test5.bin test6.bin test7.bin test1_rcm.bin test2_rcm.bin test3_rcm.bin test4_rcm.bin test5_rcm.bin test6_rcm.bin test7_rcm.bin



test1.bin: $(SOURCES) test_isxdigit.c test_isupper.c main.c
	$(call compile, -DHAVE_ISXDIGIT -DHAVE_ISUPPER)
	$(runtest)

test1_rcm.bin: $(SOURCES) test_isxdigit.c test_isupper.c main.c
	$(call compile_rcm, -DHAVE_ISXDIGIT -DHAVE_ISUPPER)
	$(runtest_rcm)

test2.bin: $(SOURCES) test_isspace.c test_ispunct.c main.c
	$(call compile, -DHAVE_ISSPACE -DHAVE_ISPUNCT)
	$(runtest)

test2_rcm.bin: $(SOURCES) test_isspace.c test_ispunct.c main.c
	$(call compile_rcm, -DHAVE_ISSPACE -DHAVE_ISPUNCT)
	$(runtest_rcm)

test3.bin: $(SOURCES) test_isprint.c test_islower.c main.c
	$(call compile, -DHAVE_ISPRINT -DHAVE_ISLOWER)
	$(runtest)

test3_rcm.bin: $(SOURCES) test_isprint.c test_islower.c main.c
	$(call compile_rcm, -DHAVE_ISPRINT -DHAVE_ISLOWER)
	$(runtest_rcm)

test4.bin: $(SOURCES) test_isgraph.c test_isdigit.c main.c
	$(call compile, -DHAVE_ISGRAPH -DHAVE_ISDIGIT)
	$(runtest)

test4_rcm.bin: $(SOURCES) test_isgraph.c test_isdigit.c main.c
	$(call compile_rcm, -DHAVE_ISGRAPH -DHAVE_ISDIGIT)
	$(runtest_rcm)

test5.bin: $(SOURCES) test_iscntrl.c test_isascii.c main.c
	$(call compile, -DHAVE_ISCNTRL -DHAVE_ISASCII)
	$(runtest)

test5_rcm.bin: $(SOURCES) test_iscntrl.c test_isascii.c main.c
	$(call compile_rcm, -DHAVE_ISCNTRL -DHAVE_ISASCII)
	$(runtest_rcm)

test6.bin: $(SOURCES) test_isalpha.c test_isalnum.c main.c
	$(call compile, -DHAVE_ISALPHA -DHAVE_ISALNUM)
	$(runtest)

test6_rcm.bin: $(SOURCES) test_isalpha.c test_isalnum.c main.c
	$(call compile_rcm, -DHAVE_ISALPHA -DHAVE_ISALNUM)
	$(runtest_rcm)

test7.bin: $(SOURCES) test_isbdigit.c test_isodigit.c main.c
	$(call compile, -DHAVE_ISBDIGIT -DHAVE_ISODIGIT)
	$(runtest)

test7_rcm.bin: $(SOURCES) test_isbdigit.c test_isodigit.c main.c
	$(call compile_rcm, -DHAVE_ISBDIGIT -DHAVE_ISODIGIT)
	$(runtest_rcm)


clean:
	rm -f test*.bin $(OBJECTS) zcc_opt.def *~
