MYDIR := $(dir $(lastword $(MAKEFILE_LIST)))

EBBRT_TARGET := pingpong
EBBRT_APP_OBJECTS := pingpong.o Printer.o
EBBRT_APP_VPATH := $(abspath $(MYDIR)../src)
EBBRT_CONFIG := $(abspath $(MYDIR)../src/ebbrtcfg.h)

include $(abspath $(EBBRT_SRCDIR)/apps/ebbrthosted.mk)
