#
#
#	The impromptu compilation makefile for z88dk
#
#	$Id: Makefile,v 1.23 2002-11-05 11:48:33 dom Exp $
#

prefix = /usr/local

# The default machine, the lib/config/DEFAULT.cfg file is copied to zcc.cfg
DEFAULT = z88


all: setup appmake copt zcpp sccz80 z80asm zcc config

setup:
	echo '#define PREFIX "${prefix}$"/lib/z88dk"' > src/config.h

appmake:
	cd src/appmake ; $(MAKE) 

copt:
	cd src/copt ; $(MAKE)

zcpp:
	cd src/cpp ; $(MAKE)

sccz80:
	cd src/sccz80 ; $(MAKE) 

z80asm:
	echo 'Configure z80asm for ENDIAN status!!'
	cd src/z80asm ; $(MAKE)

zcc:
	cd src/zcc ; $(MAKE) 

config:
	./config.sh `pwd` $(DEFAULT)

libs:
	cd libsrc ; $(MAKE)
	cd libsrc ; $(MAKE) install

install-libs:
	mkdir -p $(prefix)/lib/clibs
	cp -R lib/clibs/* $(prefix)/lib/clibs/


install:
	cd src/appmake ; $(MAKE) PREFIX=$(prefix) install
	cd src/copt ; $(MAKE) PREFIX=$(prefix) install
	cd src/cpp ; $(MAKE) PREFIX=$(prefix) install
	cd src/sccz80 ; $(MAKE) PREFIX=$(prefix) install
	cd src/z80asm ; $(MAKE) PREFIX=$(prefix) install
	cd src/zcc ; $(MAKE) PREFIX=$(prefix) install
	mkdir -p $(prefix)/lib/z88dk
	cp -R include $(prefix)/lib/z88dk
	cp -R lib $(prefix)/lib/z88dk
	find $(prefix)/lib/z88dk/include -name '*.h' | xargs chmod 644
	find $(prefix)/lib/z88dk/include -type d | xargs chmod 755
	find $(prefix)/lib/z88dk/lib  | xargs chmod 644
	find $(prefix)/lib/z88dk/lib -type d | xargs chmod 755
	./config.sh $(prefix)/lib/z88dk $(DEFAULT)



clean:
	cd libsrc ; $(MAKE) clean
	cd src/sccz80 ; $(MAKE) clean
	cd src/cpp ; $(MAKE) clean
	cd src/z80asm ; $(MAKE) clean
	cd lib/config ; $(RM) *.cfg
	cd lib/clibs ; $(RM) *.lib
