MYDIR := $(dir $(lastword $(MAKEFILE_LIST)))

app_sources := \
	pingpong.cc \
	Printer.cc 

target := pingpong

include $(abspath $(EBBRT_SRCDIR)/apps/ebbrthosted.mk)
