case $CONFIG in
'')
	if test ! -f ../config.sh; then
		(echo "Can't find ../config.sh."; exit 1)
	fi 2>/dev/null
	. ../config.sh
	;;
esac
case "$O" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
echo "Compiling C code in C13"
$spitshell >Makefile <<!GROK!THIS!
INCLUDE_PATH =  -I"\$(ISE_LIBRARY)\library\time\spec\include" -I"c:\program files\eiffel software\eiffelstudio 17.01 gpl\contrib\library\network\http_network/spec/include"
SHELL = /bin/sh
CC = $cc
CPP = $cpp
CFLAGS = $wkoptimize $mtccflags $large -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
CPPFLAGS = $wkoptimize $mtcppflags $large -DWORKBENCH -I"$rt_include" -I. \$(INCLUDE_PATH)
LDFLAGS = $ldflags
CCLDFLAGS = $ccldflags  $windows_flags
LDSHAREDFLAGS =  $mtldsharedflags
EIFLIB = "$rt_lib/$prefix$mt_prefix$wkeiflib$suffix"
EIFTEMPLATES = $rt_templates
LIBS = $mtlibs
MAKE = $make
AR = $ar
LD = $ld
MKDEP = $mkdep \$(DPFLAGS) --
MV = $mv
CP = $cp
RANLIB = $ranlib
RM = $rm -f
FILE_EXIST = $file_exist
RMDIR = $rmdir
X2C = "$x2c"
SHAREDLINK = $sharedlink
SHAREDLIBS = $sharedlibs
SHARED_SUFFIX = $shared_suffix
COMMAND_MAKEFILE = 
START_TEST = $start_test 
END_TEST = $end_test 
CREATE_TEST = $create_test 
SYSTEM_IN_DYNAMIC_LIB = ewf_app$shared_suffix 
!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C13_c.o 

OLDOBJECTS =  ty414.o ty414d.o ty415.o ty415d.o ty416.o ty416d.o ty417.o ty417d.o \
	ty418.o ty418d.o ty419.o ty419d.o ty420.o ty420d.o ty421.o ty421d.o \
	ty422.o ty422d.o ty423.o ty423d.o ty424.o ty424d.o ty425.o ty425d.o \
	ty426.o ty426d.o na413.o na413d.o ar412.o ar412d.o re400.o re400d.o \
	to404.o to404d.o se408.o se408d.o dy405.o dy405d.o bo401.o bo401d.o \
	ta399.o ta399d.o li411.o li411d.o un410.o un410d.o ac396.o ac396d.o \
	bi409.o bi409d.o fi402.o fi402d.o dy406.o dy406d.o ba397.o ba397d.o \
	ch407.o ch407d.o co398.o co398d.o bo403.o bo403d.o co428.o co428d.o \
	co427.o co427d.o 

all: Cobj13.o

Cobj13.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj13.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

