CC      = gcc
CFLAGS  = -g
RM      = rm -f

default: all

all: build

build: basic.c
	$(CC) $(CFLAGS) -o build basic.c

clean veryclean:
	$(RM) build