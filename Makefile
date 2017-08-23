SUBDIRS = sort
CC = gcc
CFLAGS = -O2 -Wall
LIB = lib

all: subdirs

subdirs: $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -C $@

clean:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir $@; \
	done

.PHONY: all subdirs $(SUBDIRS)
