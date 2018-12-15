DIST_SUBDIRS=msglayer joblayer ajobs applayer banking dialogs control
SUBDIRS=msglayer joblayer ajobs applayer banking dialogs control

AM_CFLAGS=-DBUILDING_AQHBCI @visibility_cflags@

EXTRA_DIST=aqhbci.xml.in header.xml.in

INCLUDES = -I$(aqbanking_symlinkdir) $(gwenhywfar_includes) \
 -I$(srcdir)/joblayer

BUILT_SOURCES = version.h

CLEANFILES = $(BUILT_SOURCES) hbci.xml

plugindir= $(aqbanking_plugindir)/providers
plugin_DATA=aqhbci.xml

#iheaderdir=@aqbanking_headerdir_am@/aqhbci
#iheader_HEADERS=

noinst_HEADERS = \
  aqhbci.h \
  aqhbci_l.h

xmldatadir=$(aqbanking_pkgdatadir)/backends/aqhbci
xmldata_DATA=hbci.xml

hbci.xml: header.xml applayer/xml/base.xml ajobs/accountjobs.xml
	$(XMLMERGE) --compact --header -v header.xml applayer/xml/base.xml ajobs/accountjobs.xml -o $@


sources:
	for f in $(libaqhbci_la_SOURCES); do \
	  echo $(subdir)/$$f >>$(top_srcdir)/i18nsources; \
	done
	for f in $(plugin_DATA); do \
	  echo $(subdir)/$$f >>$(top_srcdir)/pdsources; \
	done
	for d in $(SUBDIRS); do \
	  $(MAKE) -C $$d sources; \
	done

# AqHBCI plugin library
noinst_LTLIBRARIES=libaqhbci.la
libaqhbci_la_SOURCES=aqhbci.c
libaqhbci_la_LIBADD=\
  msglayer/libhbcimsg.la \
  joblayer/libhbcijob.la \
  ajobs/libhbciaccjobs.la \
  applayer/libhbciapp.la \
  banking/libhbcibanking.la \
  control/libhbcicontrol.la \
  dialogs/libaqhbci_dlgs.la


built_sources: $(BUILT_SOURCES)
