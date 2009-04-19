# Copyright (C) 2009 Stelios Bounanos, M0GLD (m0gld AT enotty DOT net)

ASCIIDOC_CONF = asciidoc.conf
ASCIIDOC_SRC = fldigi.1.txt fldigi-shell.1.txt guide.txt
ASCIIDOC_MAN_DIST = fldigi.1 fldigi-shell.1
ASCIIDOC_MAN_INST = fldigi.1
if ENABLE_XMLRPC
    ASCIIDOC_MAN_INST += fldigi-shell.1
endif
ASCIIDOC_HTML = guide.html

EXTRA_DIST = $(ASCIIDOC_CONF) $(ASCIIDOC_SRC) $(ASCIIDOC_MAN_DIST)

man_MANS = $(ASCIIDOC_MAN_INST)
MOSTLYCLEANFILES = *.xml
DISTCLEANFILES = $(ASCIIDOC_HTML)
MAINTAINERCLEANFILES = $(ASCIIDOC_MAN_INST)

A2X_ARGS = --format=manpage --destination-dir=$(builddir)/../doc
if HAVE_ASCIIDOC_NO_XMLLINT
    A2X_ARGS += --no-xmllint
endif

.SECONDEXPANSION:

%.1: $$@.txt $(ASCIIDOC_CONF)
if HAVE_ASCIIDOC
	$(A2X) $(A2X_ARGS) $<
else
	echo '.TH "NOT-BUILT" "1" "" "" ""' > $@
endif
# Without .SECONDEXPANSION we would use something like this:
#$(ASCIIDOC_MAN_INST): asciidoc.conf
#	a2x $(A2X_ARGS) $@.txt
#fldigi.1: fldigi.1.txt
#fldigi-shell.1: fldigi-shell.1.txt

# The rest of the Makefile is enabled only if we have asciidoc
if HAVE_ASCIIDOC

ASCIIDOC_ICONS_DIR ?= /usr/share/asciidoc/images/icons
# Additional attributes are defined in guide.conf
ASCIIDOC_ARGS = --unsafe -a toc -a data-uri -a badges -a icons -a iconsdir=$(ASCIIDOC_ICONS_DIR)

%.html: $$*.txt $(ASCIIDOC_CONF)
	@if ! test -d $(ASCIIDOC_ICONS_DIR); then \
	    echo "  *** The default asciidoc icons directory, \"$(ASCIIDOC_ICONS_DIR)\", does not exist." >&2; \
	    echo "  *** Please rerun make with the correct ASCIIDOC_ICONS_DIR, e.g.:" >&2; \
	    echo "  ***   make ASCIIDOC_ICONS_DIR=/path/to/icons" >&2; \
	    false; \
	fi
	$(ASCIIDOC) $(ASCIIDOC_ARGS) --out-file $@ $<

all-local: $(ASCIIDOC_MAN_DIST) $(ASCIIDOC_HTML)

endif