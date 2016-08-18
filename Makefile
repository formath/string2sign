CC = g++

DEBUG = -g -ggdb -DINFO
CFLAGS = -W -Wall -Werror -fPIC $(DEBUG)

LIB_OBJS = ./output/ul_prime.o ./output/ul_sign.o

LIBRARY = ./output/libsign.so

all: $(LIBRARY) sign

.PHONY: clean
clean:
	-rm .$(LIB_OBJS) sign
	-rm $(LIBRARY)

$(LIBRARY): $(LIB_OBJS)
	$(CC) $(CFLAGS) -pthread -fPIC -shared $(LIB_OBJS) -o $(LIBRARY) -lm

$(LIB_OBJS): ./include/* ./src/*
	$(CC) $(CFLAGS) -pthread -fPIC -shared $(LIB_OBJS) -o $(LIBRARY) -lm

sign: $(LIB_OBJS) sign.o
	$(CC) $(CFLAGS) -static-libgcc -static-libstdc++ -std=c++11 -pthread $(LIB_OBJS) sign.o -o $@ -lm

