CC=g++
INCDIR=include
CFLAGS=-I$(INCDIR)

all:
	$(CC) $(CFLAGS) -o emulator  src/*.cpp

