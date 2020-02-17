DIRS = lib 1.intro sockets 14.advio daemons datafiles db environ \
	3.fileio 4.filedir ipc1 ipc2 proc pty relation signals 2.standards \
	5.stdio termios threadctl threads printer exercises

all:
	for i in $(DIRS); do \
		(cd $$i && echo "making $$i" && $(MAKE) ) || exit 1; \
	done

clean:
	for i in $(DIRS); do \
		(cd $$i && echo "cleaning $$i" && $(MAKE) clean) || exit 1; \
	done
